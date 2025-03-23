#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number = ";
    cin >> num;
    for (int i = 0; i <= num; i++)
    {
        if (i * i == num)
        {
            true;
        }
        else
        {
            false;
        }
    }
    return 0;
}