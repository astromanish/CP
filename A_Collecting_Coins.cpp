
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define MOD 1e9 + 7

int main()
{
    int t;
    cin >> t;
    int n, m, k, x, y;
    int a, b, c;
    int i, j;
    while (t--)
    {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2] >> n;
        sort(arr, arr + 3);
        n -= 2 * arr[2] - arr[0] - arr[1];
        if (n < 0 || n % 3 != 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}