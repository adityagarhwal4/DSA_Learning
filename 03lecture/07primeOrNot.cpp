#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    bool isPrime = true;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
        i++;
    }
    if (isPrime)
    {
        cout << n << " is a prime number." << endl;
    }else{
        cout << n << " is not prime number." << endl;
    }
}