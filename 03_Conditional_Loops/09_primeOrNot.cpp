#include <iostream>
using namespace std;
int main()
{
    int num;
    bool isPrime = true;
    cout << "Enter the number = ";
    cin >> num;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "is prime ";
    }
    else
    {
        cout << "Not prime";
    }

    return 0;
}