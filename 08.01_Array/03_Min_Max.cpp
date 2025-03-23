#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n;
    int mx = INT_MIN;
    int mn = INT_MAX;
    n = sizeof(arr) / sizeof(arr[0]);

    // mx = max(mx, arr[i]);
    // mn = min(mn, arr[i]);
    for (int i = 0; i < n; i++)
    {
        // if (max < arr[i])
        // {
        //     max = arr[i];
        // }
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }
    cout << mx << endl
         << mn;

    return 0;
}