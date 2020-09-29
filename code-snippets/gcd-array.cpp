#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int gcdArray(int ar[], int n)
{
    int res = ar[0];
    for (int i = 1; i < n; i++)
    {
        res = gcd(res, ar[i]);
        if (res == 1)
        {
            return 1;
        }
    }
    return res;
}

int main()
{
    int arr[] = {1, 2, 3};
    cout << gcdArray(arr, 3);
    return 0;
}