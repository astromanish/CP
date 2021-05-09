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
    while (t--)
    {
        cin >> n >> m;
        if (n % 2 != 0 && m % 2 != 0)
            cout << n * m / 2 + 1 << endl;
        else
            cout << n * m / 2 << endl;
    }
    return 0;
}