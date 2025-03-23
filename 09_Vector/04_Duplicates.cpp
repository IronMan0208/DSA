// Given an array, tell if the array contains duplicates or not.
#include <iostream>
#include <vector>
using namespace std;
vector<int> Duplicate(vector<int> &arr, int Double)
{
    int n = arr.size();
    vector<int> duplicates;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicates.push_back(arr[i]);
                break;
            }
        }
    }
    return duplicates;
}
int main()
{
    vector<int> v = {2, 5, 6, 4, 9, 8, 2, 9, 4, 5, 7};
    int Double = 5;
    vector<int> duplicates = Duplicate(v, Double);
    if (!duplicates.empty())
    {
        cout << "Duplicates Value: ";
        for (int num : duplicates)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "No Duplicates value found";
    }
    return 0;
}