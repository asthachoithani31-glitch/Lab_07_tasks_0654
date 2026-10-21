
#include <iostream>
using namespace std;

int main()
{
    int seats[10][4] = {0};
    int reservations, row, seat;
    int fullyBookedRows = 0;

    // 1. Initialize seating arrangement
    cout << "Airline Seat Reservation System" << endl;
    cout << "Total seats: 40" << endl;

    // 2. Manage seat reservations
    cout << "How many seats do you want to reserve? ";
    cin >> reservations;

    for (int i = 0; i < reservations; i++)
    {
        while (true)
        {
            cout << "Enter row number (1-10): ";
            cin >> row;

            cout << "Enter seat number (1-4): ";
            cin >> seat;

            // Validate row and seat numbers
            if (row < 1 || row > 10 ||
                seat < 1 || seat > 4)
            {
                cout << "Invalid row or seat number."
                     << endl;
                continue;
            }

            // Check seat availability
            if (seats[row - 1][seat - 1] == 0)
            {
                seats[row - 1][seat - 1] = 1;
                cout << "Seat reserved successfully!"
                     << endl;
                break;
            }
            else
            {
                cout << "Seat already booked" << endl;
            }
        }
    }

    // 3. Display seating arrangement
    cout << "\nSeating Arrangement" << endl;
    cout << "Row\tSeat 1\tSeat 2\tSeat 3\tSeat 4"
         << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << "\t";

        for (int j = 0; j < 4; j++)
        {
            cout << seats[i][j] << "\t";
        }

        cout << endl;
    }

    // 4. Identify fully booked rows
    for (int i = 0; i < 10; i++)
    {
        bool full = true;

        for (int j = 0; j < 4; j++)
        {
            if (seats[i][j] == 0)
            {
                full = false;
                break;
            }
        }

        if (full)
        {
            fullyBookedRows++;
        }
    }

    // 5. Display final result
    cout << "\nTotal fully booked rows: "
         << fullyBookedRows << endl;

    return 0;
}

