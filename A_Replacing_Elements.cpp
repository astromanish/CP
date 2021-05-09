
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
    int i, j;
    int w, h;
    int d;
    while (t--)
    {
        cin >> n >> d;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        if (arr[n - 1] <= d || arr[0] + arr[1] <= d)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}