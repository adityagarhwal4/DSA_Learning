#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int totalBits = 0;
    while (n != 0)
    {
        if ((n & 1) == 1)
        {
            totalBits += 1;
        }
        n = n >> 1;
    }
    cout << totalBits << endl;
}