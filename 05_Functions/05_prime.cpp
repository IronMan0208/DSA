#include <iostream>
using namespace std;
int prime(int num)
{
    int isPrime = true;
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
        }
    }
    return isPrime;
}

int printPrime_num(int num)
{
    for (int i = 2; i <= num; i++)
    {
        if (prime(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int num, choice;

    cout << "1. Check Prime or not" << endl
         << "2. Print all Prime number = ";
    cin >> choice;

    switch (choice)
    {
    case 1:

        cout << "Enter the number = ";
        cin >> num;
        if (prime(num))
        {
            cout << num << " is prime";
        }
        else
        {
            cout << num << " not prime";
        }
        break;
    case 2:
        cout << "Enter the number = ";
        cin >> num;
        printPrime_num(num);
        break;
    default:
        cout << "Invalid Choice";
        break;
    }
    return 0;
}