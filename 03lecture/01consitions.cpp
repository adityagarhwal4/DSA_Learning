#include <iostream>
using namespace std;

int main()
{
    // TO CHECK THE NUMBER IS GREATER, SMALLER or EQUAL
    // int a, b;
    // cout << "Enter the First Number : ";
    // cin >> a;
    // cout << "Enter the Second Number : ";
    // cin >> b;

    // if (a > b)
    // {
    //     cout << "The number " << a << " is greater then " << b << endl;
    // }
    // else if (a < b)
    // {
    //     cout << "The number " << a << " is smaller then " << b << endl;
    // }
    // else
    // {
    //     cout << "The number " << a << " is equal to " << b << endl;
    // }

    // TO CHECK THE NUMBER IS +ve, -ve or ZERO

    int a, b;
    cout << "Enter the Number : ";
    cin >> a;

    if (a > 0)
    {
        cout << a << " is positive" << endl;
    }
    else if (a < 0)
    {
        cout << a << " is negative" << endl;
    }
    else
    {
        cout << a << " is ZERO" << endl;
    }
}