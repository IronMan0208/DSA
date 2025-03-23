#include <iostream>
using namespace std;
int reverse(int num)
{
    int add = 0, rem;
    while (num > 0)
    {
        rem = num % 10;
        add = add * 10 + rem;
        num /= 10;
    }
    return add;
}
int main()
{
    int num, result;
    cout << "Enter the number = ";
    cin >> num;
    result = reverse(num);
    cout << result;
    return 0;
}