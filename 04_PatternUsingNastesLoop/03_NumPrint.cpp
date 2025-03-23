#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number for printing = ";
    cin >> num;
    int number = 1;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
    return 0;
}