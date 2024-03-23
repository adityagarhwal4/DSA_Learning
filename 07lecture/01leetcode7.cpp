#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    long reverseDigit = 0;
    while (n != 0)
    {
        int rem = n % 10;
        reverseDigit = (reverseDigit * 10) + rem;
        n = n / 10;
    }
    cout << reverseDigit;
}