#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int binaryNo = 0;
    int multiply = 1;
    while (n != 0)
    {
        int rem = (n % 2) * multiply;
        binaryNo += rem;
        multiply *= 10;
        n = n / 2;
    }
    cout << binaryNo << endl;
}