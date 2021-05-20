
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
    int a, b, c;
    cin >> a >> b >> c;
    int ans;
    if (a < b + c)
    {
        ans = a + min(c, a + b) + min(b, a + c);
    }
    else
    {
        if (a == b + c)
        {
            ans == a + b + c;
        }
        else
        {
            ans = 2 * (b + c);
        }
    }
    cout << ans << endl;
    return 0;
}
