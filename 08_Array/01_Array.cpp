#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int marks[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number " << i + 1 << " = ";
        cin >> marks[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }
    return 0;
}