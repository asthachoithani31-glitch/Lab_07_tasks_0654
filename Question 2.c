
#include <iostream>
using namespace std;

int main()
{
    int grid[3][3];
    bool valid = true;

    // 1. Input the Sudoku grid
    cout << "Enter the 3x3 Sudoku grid (0 for empty cells):"
         << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> grid[i][j];
        }
    }

    // 2. Validate the number range
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] < 0 || grid[i][j] > 9)
            {
                valid = false;
            }
        }
    }

    // 3. Check for duplicate numbers
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] == 0)
            {
                continue;
            }

            for (int r = 0; r < 3; r++)
            {
                for (int c = 0; c < 3; c++)
                {
                    // Compare each cell only with later cells
                    if (r * 3 + c > i * 3 + j)
                    {
                        if (grid[i][j] == grid[r][c])
                        {
                            valid = false;
                        }
                    }
                }
            }
        }
    }

    // 4. Display the validation result
    if (valid)
    {
        cout << "Valid Grid" << endl;
    }
    else
    {
        cout << "Invalid Grid" << endl;
    }

    return 0;
}

