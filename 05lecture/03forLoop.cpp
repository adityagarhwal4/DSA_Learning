#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    cout << "Printing count from 1 to " << n << ": ";

    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << endl;

    cout << "Sum of 1 to " << n << " is : ";
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout << sum << endl;
}