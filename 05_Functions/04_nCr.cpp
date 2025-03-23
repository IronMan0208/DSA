#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    if (r > n) return 0;  
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);

    return fact_n / (fact_r * fact_nmr);
}

int main()
{
    int n, r;
    cout << "Enter the number n = ";
    cin >> n;
    cout << "Enter the value of r = ";
    cin >> r;
    if (n < 0 || r < 0)  
    {
        cout << "n and r must be non-negative integers." << endl;
    }
    else
    {
        cout << "nCr(" << n << ", " << r << ") = " << nCr(n, r) << endl;
    }
    // cout << nCr(n, r);
    return 0;
}