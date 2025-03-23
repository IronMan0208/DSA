#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any char for checking lower and upper case = ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is lower case " << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is upper case";
    }
    else
    {
        cout << "Invalid Character ";
    }

    return 0;
}