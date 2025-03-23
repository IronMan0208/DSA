#include <iostream>
using namespace std;

int sumOfN(int n)
{
    int n1 = 0;
    for (int i = 0; i <= n; i++)
    {
        n1 += i;
    }
    return n1;
}
int main()
{
    int num, sum = 0;
    cout << "Enter the number = ";
    cin >> num;
    sum = sumOfN(num);
    cout << "The total is = " << sum;
    return 0;
}