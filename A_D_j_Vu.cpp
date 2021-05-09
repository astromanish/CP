
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
    int t;
    cin >> t;
    int n, m, k, x, y;
    int i, j;
    int w, h;
    while (t--)
    {
        string s;
        cin >> s;
        int l = s.length();
        bool p = false;
        int pos;
        for (i = 0; i < l; i++)
        {
            if (s[i] != 'a')
            {
                pos = l - i;
                p = true;
                break;
            }
        }
        if (p)
        {
            cout << "YES" << endl;
            s.insert(pos, "a");
            cout << s << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}