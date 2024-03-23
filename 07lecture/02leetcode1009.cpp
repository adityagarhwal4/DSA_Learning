#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n == 0)
    {
        cout << 1;
    }
    int givenNo = n;
    int mask = 0;
    int finalNumber = 0;
    while (n != 0)
    {
        mask = (mask << 1) | 1;
        n = n >> 1;
    }

    cout << ((~givenNo) & mask);
}