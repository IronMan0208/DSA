#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Entr the number for sum from 1 to n = ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    cout << "The total sum is " << sum;

    return 0;
}