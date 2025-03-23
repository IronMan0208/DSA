#include <iostream>
using namespace std;
int binaryDecimal(int num)
{
    int rem, ans = 0, pow = 1;
    while (num > 0)
    {
        rem = num % 10;
        ans += rem * pow;
        num = num / 10;
        pow *= 2;
    }
    return ans;
}
int main()
{
    int num;
    cout << "Enter number = ";
    cin >> num;
    cout << binaryDecimal(num);
    return 0;
}