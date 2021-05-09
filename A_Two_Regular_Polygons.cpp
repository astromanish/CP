
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
        cin >> n >> m;
        if (n % m == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}