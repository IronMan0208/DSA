#include <iostream>
using namespace std;
int main()
{
    int num, oddSum = 0;
    cout << "Enter the number for sum odd numbers = ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            oddSum+=i;
        }
        
    }
    cout << oddSum;

    return 0;
}