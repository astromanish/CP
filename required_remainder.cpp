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
    int x, y, n;
    while (t--)
    {
        cin >> x >> y >> n;
        if (n - n % x + y <= n)
            cout << n - n % x + y << endl;
        else
            cout << n - n % x + y - x << endl;
    }

    return 0;
}