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

        int j = n;
        while (j > 0)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
}