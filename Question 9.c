#include <iostream>
using namespace std;

int main() {
    int departments, employees, days;
    const int dailyWage = 500;
    const int bonus = 2000;

    int salary;
    int departmentTotal;
    int grandTotal = 0;

    cout << "Enter number of departments: ";
    cin >> departments;

    for (int d = 1; d <= departments; d++) {
        cout << "\nEnter number of employees in Department "
             << d << ": ";
        cin >> employees;

        departmentTotal = 0;

        for (int e = 1; e <= employees; e++) {
            cout << "Enter days worked by Employee "
                 << e << ": ";
            cin >> days;

            salary = days * dailyWage;

            if (days > 25) {
                salary += bonus;
            }

            cout << "Department " << d
                 << ", Employee " << e
                 << ": Days Worked = " << days
                 << ", Salary = Rs. " << salary
                 << endl;

            departmentTotal += salary;
        }

        cout << "\nTotal salary for Department "
             << d << ": Rs. "
             << departmentTotal << endl;

        grandTotal += departmentTotal;
    }

    cout << "\nGrand Total Salary: Rs. "
         << grandTotal << endl;

    return 0;
}
