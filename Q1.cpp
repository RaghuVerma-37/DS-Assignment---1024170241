#include <iostream>
using namespace std;

void createArray(int arr[], int size) {
    cout << "Enter " << size << " elements" << endl;     
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void displayArray(int arr[], int count) {
    cout << "Array:" << endl;
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertElement(int arr[], int &count, int maxSize) {
    int pos, element;
    cout << "Position to Insert(1 - " << maxSize << ")--> ";
    cin >> pos;

    cout << "Enter the Element --> ";
    cin >> element;

    if (pos > count + 1 || count == maxSize) {
        cout << "Invalid" << endl;
        return;
    }

    for (int i = count; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = element;
    count++;
}

void deleteElement(int arr[], int &count) {
    int pos;
    cout << "Enter the position of the element you want to delete --> ";
    cin >> pos;

    if (pos > count || count == 0) {
        cout << "Invalid" << endl;
        return;
    }

    for (int i = pos - 1; i < count - 1; i++) {
        arr[i] = arr[i + 1];
    }
    count--;
}

void searchElement(int arr[], int count) {
    int element;
    cout << "Enter the element you want to search --> ";
    cin >> element;

    for (int i = 0; i < count; i++) {
        if (arr[i] == element) {
            cout << "Element found at position " << i + 1 << endl;
            return;
        }
    }

    cout << "Element not found" << endl;
}

int main() {
    const int MAX = 10;
    int arr[MAX];
    int count = 0;
    int cmnd = 0;
    int created = 0;

    while (cmnd != 6) {
        cout << "Create Array(1), Display Array(2), Insert an element(3), Delete an element(4), Linear Search(5), Exit(6) --> ";
        cin >> cmnd;

        switch (cmnd) {
            case 1:
                if (created == 0) {
                    createArray(arr, MAX);
                    count = MAX;
                    created = 1;
                } else {
                    cout << "Array already created" << endl;
                }
                break;

            case 2:
                if (created == 1) displayArray(arr, count);
                break;

            case 3:
                if (created == 1) {
                    insertElement(arr, count, MAX);
                } else {
                    cout << "Array not created" << endl;
                }
                break;

            case 4:
                if (created == 1) {
                    deleteElement(arr, count);
                } else {
                    cout << "Array not created" << endl;
                }
                break;

            case 5:
                if (created == 1 && count > 0) {
                    searchElement(arr, count);
                } else {
                    cout << "No elements" << endl;
                }
                break;

            case 6:
                break;

            default:
                cout << "Invalid" << endl;
        }
    }

    return 0;
}
