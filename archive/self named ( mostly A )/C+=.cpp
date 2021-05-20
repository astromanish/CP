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
    int t, n, k, i, j, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> n;
        int cnt = 0;
        while (1)
        {
            if (a > n || b > n)
                break;
            if (a > b)
                b += a;
            else
                a += b;
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}