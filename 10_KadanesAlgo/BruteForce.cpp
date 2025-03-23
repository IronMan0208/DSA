#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n = 7;
    int arr[n] = {3, -4, 5, 4, -1, 7, -8};
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int curSum = 0;
        for (int end = start; end < n; end++)
        {
            curSum += arr[end];
            maxSum = max(curSum, maxSum);
        }
    }
    cout << maxSum;
    return 0;
}