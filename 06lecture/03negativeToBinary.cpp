// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     int positiveNumber = -n;
//     int multiply = 1;
//     int i = 0;
//     int oneCompliment = 0;
//     while (i < 32)
//     {
//         if ((n & 1) == 1)
//         {
//             oneCompliment += (multiply * 1);
//         }
//         else
//         {
//             oneCompliment += (multiply * 0);
//         }
//         multiply *= 10;
//         n = n >> 1;
//         i++;
//     }
// }
#include <iostream>
#include <bitset>

std::string toBinary(int num) {
    const int bits = sizeof(num) * 8;
    std::bitset<bits> bs(num);
    return bs.to_string();
}

int main() {
    int number = -6; // Example negative number
    std::cout << "Binary representation of " << number << " is: " << toBinary(number) << std::endl;
    return 0;
}