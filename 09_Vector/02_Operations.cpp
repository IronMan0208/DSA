#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> num = {12, 20, 36, 25, 13, 14, 60};
    // Get the first element
    // cout << num.front() << endl;

    // Get the last element
    // cout << num.back() << endl;

    // Get the positions element
    // cout << num.at(1) << endl;

    // num.push_back(30);
    num.pop_back();

    int n = num.size();
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}