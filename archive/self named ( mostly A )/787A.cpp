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
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    double term;
    for (int i = 0; i <= 100; i++)
    {
        term = (b + a * i - d) * 1.0 / c;
        cout << term << endl;
        if (term >= 0 && term == (int)term)
        {
            cout << b + a * i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}