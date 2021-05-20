
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
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        n /= 2;
        if (n % 2 == 0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    else
    {
        n = (n - 1) / 2;
        if (n % 2 == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}