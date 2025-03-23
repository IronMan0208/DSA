#include <iostream>
using namespace std;
int digitSum(int n)
{
    int digitSum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10; // Giving Coeficient   35 % 2 = 17
        n = n / 10; // Giving Reminder 35 / 2 = 1
        digitSum += lastDigit;
    }
    return digitSum;
}
int main()
{
    int num;
    cout << "Enter the number = ";
    cin >> num;
    cout << digitSum(num);

    return 0;
}