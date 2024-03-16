#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the number" << endl;
    cin >> a;
    cout << "The odd numbers in between 1 to " << a << " are : ";

    for (int i = 1; i <= a; i++)
    {
        if(i % 2 != 0){
            cout << i << ", ";
        }
    }
}