// Find the doublet in the array whose sum is eual to the given value x.
//  Two Sum

#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> &arr, int x)
{
    vector<int> v(2);
    int flag = true;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                v[0] = i;
                v[1] = j;
                return {i, j};
            }
        }
    }
}

int main()
{
    vector<int> v = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(v, target);
    if (!result.empty()) // Check if pair was found
    {
        cout << "Indexes: " << result[0] << ", " << result[1] << endl;
    }
    else
    {
        cout << "No valid pair found." << endl;
    }
    return 0;
}