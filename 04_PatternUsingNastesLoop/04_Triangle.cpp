#include <iostream>
using namespace std;
int main()
{
    char n = 'A';
    int num = 5;
    cout << "enter the char for printing = ";
    cin >> num;
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << n << " ";
            cout<<i+1<<" ";
        }
        n++;
        cout << endl;
    }

    return 0;
}