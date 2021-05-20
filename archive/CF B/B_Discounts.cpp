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
    int n, m;
    cin >> n;
    int arr[n];
    ll sum = 0;
    ff(i, 0, n)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n);
    cin >> m;
    int a;
    ff(i, 0, m)
    {
        cin >> a;
        cout << sum - arr[n - a] << endl;
    }
    return 0;
}