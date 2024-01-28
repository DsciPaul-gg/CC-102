#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
    int number = 0;
    int sum = 0;
   
    cout << endl << "THIS LOOP ADDS POSITIVE NUMBERS CONTINUOUSLY, NOT UNTIL YOU ENTER A NEGATIVE NUMBER" << endl;
    
    do 
    {
        cout << "Enter a number: ";
        cin >> number;

        sum += number;

    }   while (number >= 0);
    
    cout << endl << "The sum is " << sum << endl;
    
    return EXIT_SUCCESS;
}