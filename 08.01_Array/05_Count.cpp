#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 5, 5, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num, count = 0;
    cout << "Enter ther number = ";
    cin >> num;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > num)
        {
            count++;
        }
    }
    cout << num;
    return 0;
}