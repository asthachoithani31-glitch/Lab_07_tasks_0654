// Pattern 1
#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

// Pattern 2
#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

//Pattern 3
#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }

    return 0;
}

//Pattern 4
#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
//Pattern 5
#include <iostream>
using namespace std;

int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k <= 5 - i; k++)
        {
            cout << "  ";
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}

//Pattern 6
#include <iostream>
using namespace std;

int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k <= 5 - i; k++)
        {
            cout << "  ";
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << char('A' + j - 1) << " ";
        }

        cout << endl;
    }

    return 0;
}
