#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int prod = 1;
    int sum = 0;
    while (n != 0)
    {
        int lastDigit = n % 10;
        prod *= lastDigit;
        sum += lastDigit;
        n = n / 10;
    }
    cout << prod - sum << endl;
}