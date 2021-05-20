#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)
#define fb(a, b, c) for (int a = b; a > c; a--)

#define MOD 1e9 + 7

int main()
{
    int n;
    cin >> n;
    int arr[n];
    ff(i, 0, n)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll a = 0, b = 0;
    ff(i, 0, n / 2)
        b += arr[i];
    fb(i, n - 1, n / 2 - 1)
        a += arr[i];

    cout << a * a + b * b << endl;
    return 0;
}