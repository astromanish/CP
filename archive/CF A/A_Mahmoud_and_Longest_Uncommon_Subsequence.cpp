#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)
#define fb(a, b, c) for (int a = b; a > c; a--)

#define MOD 1e9 + 7

int main()
{
    string a, b;
    cin >> a >> b;
    if (a != b)
    {
        if (a.length() >= b.length())
            cout << a.length();
        else
            cout << b.length();
    }
    else
        cout << -1;
    return 0;
}