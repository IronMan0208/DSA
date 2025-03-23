#include <iostream>
using namespace std;
int main()
{
    int num;
    char ch = 'A';
    cout << "enter the char for printing = ";
    cin >> num;
    int n = 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}