#include <iostream>
#include <vector>
#include<string>

using namespace std;

int main() {
    int r1, c1;
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    int r2, c2;
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "We cannot multiply matrices of these two orders." << endl;
        return 0;
    }

    vector<vector<int>> m1(r1, vector<int>(c1));
    vector<vector<int>> m2(r2, vector<int>(c2));

    cout << "Enter elements in the first matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cout << "Enter element at position (" << i << "," << j << "): ";
            cin >> m1[i][j];
        }
    }

    cout << "\nEnter elements in the second matrix:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cout << "Enter element at position (" << i << "," << j << "): ";
            cin >> m2[i][j];
        }
    }

    vector<vector<int>> ans(r1, vector<int>(c2, 0));

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    cout << "\nProduct of above two matrices is:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
