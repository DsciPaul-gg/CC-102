#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num, fct;

    cout << endl;
    cout << "Enter a Positive Integer: ";
    cin >> num;

    fct = 1;

    while (num >= 1)
    {
        
        fct *= num;
        num--;

    }

    cout << "The Factorial is " << fct << endl << endl;
    
    return EXIT_SUCCESS;

}