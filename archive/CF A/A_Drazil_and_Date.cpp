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
    int a, b, s;
    cin >> a >> b >> s;
    a = abs(a);
    b = abs(b);
    if (s >= (a + b))
    {
        s -= (a + b);
        if (s % 2 == 0)
            cout << "Yes";
        else
            cout << "No";
    }
    else
        cout << "No";
    return 0;
}