#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sales[4][5];
    double salesmanTotal[4] = {0};
    double productTotal[5] = {0};
    double finalAmount[4];
    int bestProduct = 0;

    // Input sales data
    for (int i = 0; i < 4; i++) {
        cout << "\nSalesman " << i + 1 << ":\n";

        for (int j = 0; j < 5; j++) {
            cout << "Enter sales for Product " << j + 1 << ": ";
            cin >> sales[i][j];
        }
    }

    // Calculate total sales per salesman
    cout << "\n--- Total Sales per Salesman ---\n";

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            salesmanTotal[i] += sales[i][j];
        }

        cout << "Salesman " << i + 1 << ": Rs. "
             << salesmanTotal[i] << endl;
    }

    // Calculate total sales per product
    cout << "\n--- Total Sales per Product ---\n";

    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 4; i++) {
            productTotal[j] += sales[i][j];
        }

        cout << "Product " << j + 1 << ": Rs. "
             << productTotal[j] << endl;
    }

    // Find product with highest revenue
    for (int j = 1; j < 5; j++) {
        if (productTotal[j] > productTotal[bestProduct]) {
            bestProduct = j;
        }
    }

    cout << "\nBest-Selling Product: Product "
         << bestProduct + 1
         << " (Rs. " << productTotal[bestProduct] << ")\n";

    // Apply bonus
    cout << "\n--- Final Salary/Bonus Summary ---\n";

    for (int i = 0; i < 4; i++) {
        finalAmount[i] = salesmanTotal[i];

        if (salesmanTotal[i] > 10000) {
            finalAmount[i] += salesmanTotal[i] * 0.10;

            cout << "Salesman " << i + 1
                 << ": Bonus Applied (10%)";
        } else {
            cout << "Salesman " << i + 1
                 << ": No Bonus";
        }

        cout << ", Final Amount = Rs. "
             << finalAmount[i] << endl;
    }

    return 0;
}
