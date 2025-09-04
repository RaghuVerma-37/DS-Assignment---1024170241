#include <iostream>
#include <vector>
#include<string>

using namespace std;

int main() {
    int r1, c1;
    cout << "Enter number of rows and columns of first matrix: ";
    cin >> r1 >> c1;

    vector<vector<int>> m1(r1, vector<int>(c1));

    cout << "Enter elements in matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cout << "Enter element at position (" << i << "," << j << "): ";
            cin >> m1[i][j];
        }
    }

    vector<vector<int>> transpose(c1, vector<int>(r1));

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            transpose[j][i] = m1[i][j];
        }
    }

    cout << "\nTranspose of above matrix is:" << endl;
    for (int i = 0; i < c1; i++) {
        for (int j = 0; j < r1; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
