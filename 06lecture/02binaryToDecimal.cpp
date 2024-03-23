#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = 0;
    int ans = 0;
    while (n != 0)
    {
        int rem = n % 10;
        ans += (rem * pow(2, i));
        i++;
        n = n / 10;
    }

    cout << ans;
}