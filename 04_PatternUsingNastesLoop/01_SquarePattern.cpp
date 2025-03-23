#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number = ";
    cin >> num;
    for (int i = 1; i <= num; i++) // Row loop / outer loop
    {
        for (int j = 1; j <= num; j++) // Column loop / inner loop
        {
            cout <<"*"<<" ";
        }
        cout << endl;
    }

    return 0;
}