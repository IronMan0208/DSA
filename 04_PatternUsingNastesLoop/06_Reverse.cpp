#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the char for printing = ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}