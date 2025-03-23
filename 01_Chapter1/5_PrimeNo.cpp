#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cout << "Enter the number for checking number is prime or not ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
            
        }
    }
    if (count == 2)
    {
        cout << "Number is prime ";
    }
    else
    {
        cout << "Number is not prime ";
    }

    return 0;
}