#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the number of a = " << endl;
    cin >> a;
    cout << "Enter the number of b = " << endl;
    cin >> b;
    if (a > b)
    {
        cout << a << " is greater number" << endl;
    }
    else if (b > a)
    {
        cout << b << " is greater number" << endl;
    }
    else
    {
        cout << "Number is equal" << endl;
    }
    return 0;
}