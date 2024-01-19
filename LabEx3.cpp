#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int x = 1;
    int sqr;

    while (x <= 15)
    {
        sqr = x * x;
        x+=3;

        cout << sqr << endl;
    }
    
    return EXIT_SUCCESS;

}