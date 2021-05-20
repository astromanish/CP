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
    string s;
    cin >> s;
    string ans = " ";
    int l = s.length();
    bool space = false;
    ff(i, 0, l)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (space)
            {
                ans += " ";
                space = false;
            }
        }
        else
        {
            ans += s[i];
            space = true;
        }
    }
    cout << ans;
    return 0;
}