#include <iostream>
using namespace std;

int main() {
    int data[3][3];
    int key[3][3];
    int encrypted[3][3];

    int maxValue;
    int maxRow = 0, maxCol = 0;

    // Input data matrix
    cout << "Enter the Data Matrix:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> data[i][j];
        }
    }

    // Input key matrix
    cout << "Enter the Key Matrix:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> key[i][j];
        }
    }

    // Apply encryption formula
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            encrypted[i][j] =
                (data[i][j] * key[i][j]) + (i + j);
        }
    }

    // Display encrypted matrix
    cout << "\nEncrypted Matrix:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << encrypted[i][j] << "\t";
        }
        cout << endl;
    }

    // Find maximum encrypted value
    maxValue = encrypted[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (encrypted[i][j] > maxValue) {
                maxValue = encrypted[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // Display maximum and its position
    cout << "\nMaximum Encrypted Value: "
         << maxValue << endl;

    cout << "Position (row, column): ("
         << maxRow + 1 << ", "
         << maxCol + 1 << ")\n";

    return 0;
}
