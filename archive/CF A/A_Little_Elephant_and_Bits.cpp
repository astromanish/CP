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
    int l = s.length();
    int pos = 0;
    ff(i, 0, l)
    {
        if (s[i] == '0')
        {
            pos = i;
            break;
        }
    }
    s.erase(s.begin() + pos);
    cout << s;
    return 0;
}