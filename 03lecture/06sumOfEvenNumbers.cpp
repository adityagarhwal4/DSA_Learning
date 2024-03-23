#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    int i = 2;
    int sum = 0;
    while (i <= n)
    {
        sum += i;
        i += 2;
    }

    cout << "Sum of 1 to " << n << " even numbers are: " << sum << endl;
}