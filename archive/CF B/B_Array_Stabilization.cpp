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
    if (n == 2)
    {
        cout << 0 << endl;
        return 0;
    }
    int arr[n];
    ff(i, 0, n)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int a = arr[n - 1] - arr[1];
    int b = arr[n - 2] - arr[0];
    cout << min(a, b) << endl;
    return 0;
}