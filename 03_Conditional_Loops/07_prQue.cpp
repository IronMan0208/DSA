#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0, i = 0;
    cout << "Enter the number for sum odd numbers = ";
    cin >> num;
    while (i <= num)
    {
        if (i % 2 != 0)
        {
           sum+=i;
        }
        i++;
    }
    cout << sum;
    return 0;
}