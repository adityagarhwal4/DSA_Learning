#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the char ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "LOWERCASE" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "UPPERCASE" << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "NUMARIC" << endl;
    }
    else
    {
        cout << "INVALID" << endl;
    }
}