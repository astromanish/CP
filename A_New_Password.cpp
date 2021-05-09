
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a <= c; a++)
#define fb(a, b, c) for (int a = b; a >= c; a--)

#define MOD 1e9 + 7

int main()
{
    int n, k;
    cin >> n >> k;
    string s = "";
    ff(i, 0, n - 1)
    {
        s += char(97 + i % k);
    }
    cout << s << endl;
    return 0;
}