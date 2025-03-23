#include <iostream>
using namespace std;
int binaryNum(int num)
{
    int pow = 1, binary_num = 0, rem;
    while (num > 0)
    {
        rem = num % 2;
        num = num / 2; // num=num/2;
        binary_num = binary_num + (rem * pow);
        pow = pow * 10;
    }
    return binary_num;
}
int main()
{
    int num;
    cout << "Enter number = ";
    cin >> num;
    cout << binaryNum(num);
    return 0;
}