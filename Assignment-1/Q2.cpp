#include <iostream>
using namespace std;

void inputArray(int arr[], int size) {
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int removeDuplicates(int arr[], int size) {
    int temp[100];
    int uniqueCount = 0;

    for (int i = 0; i < size; i++) {
        int duplicate = 0;
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == temp[j]) {
                duplicate = 1;
                break;
            }
        }
        if (duplicate == 0) {
            temp[uniqueCount++] = arr[i];
        }
    }

    for (int i = 0; i < uniqueCount; i++) {
        arr[i] = temp[i];
    }
    return uniqueCount;
}

void printArray(int arr[], int size) {
    cout << "Array after removing duplicates:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements (max 100): ";
    cin >> n;

    int arr[100];
    inputArray(arr, n);

    n = removeDuplicates(arr, n);
    printArray(arr, n);

    return 0;
}
