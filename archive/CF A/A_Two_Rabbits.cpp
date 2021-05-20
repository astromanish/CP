
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
    int a, b;
    while (t--)
    {
        cin >> x >> y >> a >> b;

        cout << (!((y - x) % (a + b)) ? (y - x) / (a + b) : -1) << endl;
    }
    return 0;
}