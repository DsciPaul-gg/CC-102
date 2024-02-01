#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int x, y;

    for (x = 1; x <= 5; x++)
    {
        for (y = 1; y <= x; y++)
        {
            cout << y << " ";
        }

        cout << endl;
    }

    for (x = 4; x >= 1; x--)
    {
        for (y = 1; y <= x; y++)
        {
            cout << y << " ";
        }

        cout << endl;
    }

    return EXIT_SUCCESS;
}