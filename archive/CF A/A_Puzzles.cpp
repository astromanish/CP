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
    cin >> n >> m;
    int arr[m];
    ff(i, 0, m)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    vi v;
    ff(i, 0, m - n + 1)
    {
        v.push_back(arr[i + n - 1] - arr[i + 0]);
    }
    cout << *min_element(all(v));
    return 0;
}