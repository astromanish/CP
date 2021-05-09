
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
    int n, m;
    cin >> n >> m;
    string s[n + 1], t[m + 1];
    int i;
    for (i = 1; i <= n; i++)
        cin >> s[i];
    for (i = 1; i <= m; i++)
        cin >> t[i];
    int q;
    cin >> q;
    int y;
    int i_n, i_m;
    while (q--)
    {
        cin >> y;
        i_n = (y % n == 0) ? n : y % n;
        i_m = (y % m == 0) ? m : y % m;
        cout << s[i_n] + t[i_m] << endl;
    }

    return 0;
}