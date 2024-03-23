#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = 0;
    while (i < n)
    {
        int j = 0;
        int count = n - i - 1;
        ;
        while (j <= i)
        {
            char ch = 'A' + count;
            cout << ch << " ";
            j++;
            count++;
        }
        cout << endl;
        i++;
    }
}