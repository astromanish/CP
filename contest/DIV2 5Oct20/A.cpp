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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    ll a, b, c;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a > b && a > c)
        {
            cout << a + 1 << endl;
        }
        else
        {
            if (b > c)
                cout << b + 1 << endl;
            else
            {
                cout << c + 1 << endl;
            }
        }
    }
    return 0;
}