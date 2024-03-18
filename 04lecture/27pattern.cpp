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
        int count = 0;
        int j = 0;
        while (j < n + i)
        {
            if (j + i + 1 < n)
            {
                cout << "  ";
            }
            else if (j < n)
            {
                ++count;
                cout << count << " ";
            }
            else
            {
                --count;
                cout << count << " ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
}