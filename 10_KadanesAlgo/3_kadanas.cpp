#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int curSum = 0, maxSum = INT_MIN;
    for (int val : nums)
    {
        curSum += val;
        maxSum = max(curSum, maxSum);
        if (curSum < 0)
        {
            curSum = 0;
        }
    }
    return maxSum;
}
int main()
{
    int n;
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    n = maxSubArray(arr);
    cout << n;
    return 0;
}