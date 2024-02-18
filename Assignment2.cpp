#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int x, lowest, highest;
    int num[6];

    for (x = 0; x < 6; x++)
    {
        cout << "Enter 6 numbers: ";
        cin >> num[x];
    }

        highest = num[0];
        lowest = num[0];

    for (x = 1; x < 6; x++)
    {
        if (num[x] > highest)
        {
            highest = num[x];
        }

        if (num[x] < lowest)
        {
            lowest = num[x];
        }
    }

    cout << endl;
    cout << "The Highest Number is " << highest << endl;
    cout << "The Lowest Number is " << lowest << endl;

    return EXIT_SUCCESS; 
}