#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int x, factorial;

    cout << "Enter a Positive Integer: ";
    cin >> x;

    factorial = 1;
    int fct = 1;

    while (fct <= x) {

        factorial *= fct;
        fct++;

    }

    cout << "The Factorial of " << x << " is: " << factorial << endl;
    
    return EXIT_SUCCESS;

}