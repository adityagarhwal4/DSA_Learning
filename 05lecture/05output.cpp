#include <iostream>
using namespace std;

int main()
{
    // QUESTION 1

    // for(int i = 0; i <= 5; i++){
    //     cout << i << " ";
    //     i++;
    // }
    // 0 2 4

    // QUESTION 2

    // for(int i = 0; i <= 5; i--){
    //     cout << i << " ";
    //     i++;
    // }
    // infinite loop with 0

    // for (int i = 0; i <= 15; i += 2)
    // {
    //     cout << i << " ";
    //     if (i & 1)
    //     {
    //         continue;
    //     }
    //     i++;
    // }

    // 0 3 5 7

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << i << " " << j << endl;
        }
    }
}