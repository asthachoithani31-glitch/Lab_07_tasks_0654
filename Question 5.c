#include <iostream>
using namespace std;

int main() {
    int marks[2][3][3];
    int total[2][3] = {0};

    // Input marks
    for (int c = 0; c < 2; c++) {
        cout << "\nClass " << c + 1 << ":\n";

        for (int s = 0; s < 3; s++) {
            for (int sub = 0; sub < 3; sub++) {
                cout << "Enter marks for Student "
                     << s + 1 << ", Subject "
                     << sub + 1 << ": ";
                cin >> marks[c][s][sub];
            }
        }
    }

    // Calculate total marks of every student
    cout << "\n--- Student Totals ---\n";

    for (int c = 0; c < 2; c++) {
        for (int s = 0; s < 3; s++) {
            for (int sub = 0; sub < 3; sub++) {
                total[c][s] += marks[c][s][sub];
            }

            cout << "Class " << c + 1
                 << ", Student " << s + 1
                 << ": " << total[c][s] << " marks\n";
        }
    }

    // Find topper of each class
    int overallClass = 0;
    int overallStudent = 0;

    cout << "\n--- Class Toppers ---\n";

    for (int c = 0; c < 2; c++) {
        int topper = 0;

        for (int s = 1; s < 3; s++) {
            if (total[c][s] > total[c][topper]) {
                topper = s;
            }
        }

        cout << "Top Performer of Class " << c + 1
             << ": Student " << topper + 1
             << " with " << total[c][topper]
             << " marks\n";

        // Track overall topper
        if (total[c][topper] >
            total[overallClass][overallStudent]) {
            overallClass = c;
            overallStudent = topper;
        }
    }

    // Display overall topper
    cout << "\n--- Overall Topper ---\n";
    cout << "Class " << overallClass + 1
         << ", Student " << overallStudent + 1
         << " with "
         << total[overallClass][overallStudent]
         << " marks\n";

    return 0;
}
