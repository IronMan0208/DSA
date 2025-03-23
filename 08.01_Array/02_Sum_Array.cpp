#include <iostream>
using namespace std;
int main()
{
    int num = 3, sum = 0, product = 1;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the value " << i + 1 << " = ";
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < num; i++)
    {
        sum = sum + arr[i];
    }
    cout << "The sum is = " << sum;
    cout << endl;

    for (int i = 0; i < num; i++)
    {
        product = product * arr[i];
    }
    cout << "The Product is = " << product;

    return 0;
}