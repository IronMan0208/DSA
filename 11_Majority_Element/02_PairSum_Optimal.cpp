#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int> nums, int target)
{
    int n = nums.size();
    int i = 0, j = n - 1;
    vector<int> ans;
    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum < target)
        {
            i++;
        }
        else if (pairSum > target)
        {
            j--;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 7, 11, 12, 15};
    int target = 26;
    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << ", " << ans[1];
    return 0;
}