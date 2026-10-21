#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int classes, students, subjects, marks;

    int totalMarks;
    int classTotal;
    int schoolTotal = 0;

    double average;
    double classAverage;
    double schoolAverage;

    bool passed;

    cout << "Enter number of classes: ";
    cin >> classes;

    int totalStudents = 0;

    for (int c = 1; c <= classes; c++) {
        cout << "\nEnter number of students in Class "
             << c << ": ";
        cin >> students;

        classTotal = 0;

        for (int s = 1; s <= students; s++) {
            cout << "\nEnter number of subjects for Student "
                 << s << ": ";
            cin >> subjects;

            totalMarks = 0;
            passed = true;

            for (int sub = 1; sub <= subjects; sub++) {
                cout << "Enter marks for Subject "
                     << sub << ": ";
                cin >> marks;

                totalMarks += marks;

                if (marks < 40) {
                    passed = false;
                }
            }

            average = static_cast<double>(totalMarks)
                      / subjects;

            cout << fixed << setprecision(2);

            cout << "Class " << c
                 << ", Student " << s
                 << ": Total Marks = " << totalMarks
                 << ", Average = " << average
                 << ", Result = "
                 << (passed ? "Pass" : "Fail")
                 << endl;

            classTotal += totalMarks;
            totalStudents++;
        }

        // Class summary
        classAverage = static_cast<double>(classTotal)
                       / students;

        cout << "\nTotal marks of Class " << c
             << ": " << classTotal << endl;

        cout << "Class Average: "
             << classAverage << endl;

        schoolTotal += classTotal;
    }

    // Overall school summary
    cout << "\n--- Overall School Summary ---\n";

    cout << "Total Marks of All Students: "
         << schoolTotal << endl;

    if (totalStudents > 0) {
        schoolAverage =
            static_cast<double>(schoolTotal) / totalStudents;

        cout << "Overall School Average: "
             << schoolAverage << endl;
    }

    return 0;
}
