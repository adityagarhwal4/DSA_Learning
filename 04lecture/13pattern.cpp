#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = 0;
    int count = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            char ch = 'A' + count;
            cout << ch << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}