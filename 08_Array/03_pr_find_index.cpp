#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int num, target_value;
    int index = -1;
    cout << "Enter the array Size = ";
    cin >> num;
    int arr[num];
    cout << endl;

    // enter the value from the user using for loop
    cout << "enter the value from the user using for loop" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the element of " << i + 1 << " = ";
        cin >> arr[i];
    }
    cout << endl;

    // Printing the all elements of an array
    cout << "Print the all elements of array" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;

    // print size of array
    cout << "print size of array" << endl;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl;
    cout << endl;

    // get target value from the user
    cout << "get the target value from the user" << endl;
    cout << "Enter the target value  = ";
    cin >> target_value;
    cout << target_value << endl;
    cout << endl;

    // find target index in array
    cout << "find target index in array" << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target_value)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << index + 1 << endl;
    }
    return 0;
}