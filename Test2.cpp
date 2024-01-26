#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int x, items, price, tPrice, payment, change;

    cout << "How many items do you want to buy? ";
    cin >> items;
    
    x = 1;
    tPrice = 0;

    cout << "Input the prices of each item." << endl << endl;

    while (x <= items)
    {
        cout << "Price of item #" << x << ": ";
        cin >> price;

        tPrice += price;

        x++;
    }

    cout << "Total: " << tPrice << endl;


    cout << endl;
    cout << "Pay: ";
    cin >> payment;

        change = payment - tPrice;

    cout << "Change: " << change << endl << endl;

    return EXIT_SUCCESS;
}