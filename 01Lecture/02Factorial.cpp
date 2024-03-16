#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int factorial = 1;
    for (int i = n; i > 0; i--)
    {
        factorial *= i;
    }
    cout << "Factorial of " << n << "! "
         << " is " << factorial << endl;
}