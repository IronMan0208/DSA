#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    // sort
    sort(nums.begin(), nums.end());
    int freq = 1, ans = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == ans)
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }
        if (freq > n / 2)
        {
            return ans;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {3,2,3};
    int result = majorityElement(nums);
    cout << result;
    return 0;
}