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
    int a, b, k;
    while (t--)
    {
        cin >> a >> b >> k;
        ll x = 0;
        int i;
        for (i = 0; i < k; i++)
        {
            if (i % 2 == 0)
                x + a;
            else
                x - b;
        }
        cout << x << endl;
    }

    return 0;
}