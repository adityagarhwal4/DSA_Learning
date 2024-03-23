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
            if (j < n - i - 1)
            {
                cout << "  ";
            }
            else
            {
                cout << i + 1 << " ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
}