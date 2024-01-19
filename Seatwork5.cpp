#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int in; 
    int sum = 0;
    int x = 1;

    cout << "Enter a number: ";
    cin >> in;

    do
    {
        sum += x;
        x++;

    } while (in >= x);  

    cout << "The sum is " << sum << endl;

    return EXIT_SUCCESS;

}