#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double temp[3][3][3];
    double avg[3] = {0};
    double sum;

    double maxTemp;
    int maxX = 0, maxY = 0, maxZ = 0;
    int hottestLayer = 0;

    // Input temperature data
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            for (int z = 0; z < 3; z++) {
                cout << "Enter temperature at ("
                     << x + 1 << ", "
                     << y + 1 << ", "
                     << z + 1 << "): ";
                cin >> temp[x][y][z];
            }
        }
    }

    maxTemp = temp[0][0][0];

    // Calculate average temperature per z-layer
    for (int z = 0; z < 3; z++) {
        sum = 0;

        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) {
                sum += temp[x][y][z];

                if (temp[x][y][z] > maxTemp) {
                    maxTemp = temp[x][y][z];
                    maxX = x;
                    maxY = y;
                    maxZ = z;
                }
            }
        }

        avg[z] = sum / 9.0;

        cout << fixed << setprecision(2);
        cout << "Average temperature of Layer "
             << z + 1 << ": " << avg[z] << " C\n";
    }

    // Find hottest layer
    for (int z = 1; z < 3; z++) {
        if (avg[z] > avg[hottestLayer]) {
            hottestLayer = z;
        }
    }

    // Display results
    cout << "\nHottest Layer: " << hottestLayer + 1
         << " with average temperature "
         << avg[hottestLayer] << " C\n";

    cout << "Maximum Temperature: "
         << maxTemp << " C\n";

    cout << "Coordinates (x, y, z): ("
         << maxX + 1 << ", "
         << maxY + 1 << ", "
         << maxZ + 1 << ")\n";

    return 0;
}
