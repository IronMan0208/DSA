#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the char for printing = ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        char ch = 'A';
        for (int j = 0; j < num; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }

    return 0;
}