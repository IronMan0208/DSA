#include <iostream>
using namespace std;
int main()
{
    int num , evenNum = 0;
    cout << "Enter the number for sum even numbers = ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            cout<<i<<" ";
            evenNum+=i;
        }
    }
    cout<<endl;
    cout<<evenNum<<endl;
    return 0;
}