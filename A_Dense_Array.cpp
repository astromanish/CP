
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
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        ll cnt = 0;
        int last = arr[0];
        int a, b;
        for (i = 1; i < n; i++)
        {
            a = min(last, arr[i]);
            b = max(last, arr[i]);
            while (2 * a < b)
            {
                cnt++;
            }
            last = arr[i];
        }

        cout << cnt << endl;
    }
    return 0;
}