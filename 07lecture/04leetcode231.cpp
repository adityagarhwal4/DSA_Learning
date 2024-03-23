#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 0; i < 31; i++)
    {
        int ans = pow(2, i);
        if (ans == n)
        {
            cout << "True";
            break;
        }
        if (ans > n)
        {
            cout << "Falsee";
            break;
        }
    }
    cout << "False";
}