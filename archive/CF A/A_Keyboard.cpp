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
    char d;
    cin >> d;
    string s;
    cin >> s;
    string k = "qwertyuiopasdfghjkl;zxcvbnm,./";
    int l = s.length();
    string res = "";
    ff(i, 0, l)
    {
        ff(j, 0, 30)
        {
            if (k[j] == s[i])
            {
                if (d == 'L')
                    res += k[j + 1];
                else
                    res += k[j - 1];
            }
        }
    }
    cout << res << endl;
    return 0;
}