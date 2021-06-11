#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int gcd(int a, int b)
{
    return (a == 0) ? b : gcd(b % a, a);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

ll lcmArray(int arr[], int n)
{
    ll res = arr[0];

    for (int i = 1; i < n; i++)
    {
        res = (res * arr[i]) / gcd(res, arr[i]);
    }

    return res;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printf("%lld", lcmArray(arr, n));
    return 0;
}