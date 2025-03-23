#include <iostream>
using namespace std;
int modulo(int num1, int num2)
{
    int mod;
    mod = num1 % num2;
    cout << "The Modulo is = " << mod << endl;
}
int divide(int num1, int num2)
{
    int div;
    div = num1 / num2;
    cout << "The divide is = " << div << endl;
}
int main()
{
    int num1, num2, div, mod;
    cout << "Enter th number 1 = ";
    cin >> num1;
    cout << "Enter the number 2 = ";
    cin >> num2;
    modulo(num1, num2);
    divide(num1, num2);

    return 0;
}