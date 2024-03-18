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
        while (j < n)
        {
            if (j < n - i)
            {
                cout << j + 1 << " ";
            }
            else
            {
                cout << "* ";
            }
            j++;
        }
        int k = 0;
        while (k < n)
        {
            if (k < i)
            {
                cout << "* ";
            }
            else
            {
                cout << n - k << " ";
            }
            k++;
        }
        cout << endl;
        i++;
    }
}