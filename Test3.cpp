#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int x, y;

    for (x = 10; x >= 2; x-=2)
    {
        for (y = 1; y <= x; y++)
        {
            cout << "P";
        }
    
        cout << endl;
    }

    cout << "A" << endl;

    for (x = 2; x <= 10; x+=2)
    {
        for (y = 1; y <= x; y++)
        {
            cout << "D";
        }
    
        cout << endl;
    }

    return EXIT_SUCCESS;
}