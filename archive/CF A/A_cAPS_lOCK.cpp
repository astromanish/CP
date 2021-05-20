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
    int cnt = 0;
    ff(i, 1, l)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            cnt++;
    }
    if (cnt == l - 1)
    {
        if (s[0] >= 'a' && s[0] <= 'z')
            s[0] -= 32;
        else
            s[0] += 32;
        ff(i, 1, l)
        {
            s[i] += 32;
        }
        cout << s << endl;
    }
    else
        cout << s << endl;

    return 0;
}