#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int num[] = {12, 10, 25, 36, 35, 50};
    int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        // if (num[i] < smallest)
        // {
        //     smallest = num[i];
        // }
        smallest = min(num[i],smallest);
        largest = max(num[i], largest);
    }
    cout << smallest<<endl;
    cout << largest<<endl;

    return 0;
}