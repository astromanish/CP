
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
    int x, y;
    int i, j;
    while (t--)
    {
        cin >> x >> y;
        string s;
        cin >> s;
        int len = s.length();
        int u = 0, d = 0, l = 0, r = 0;
        for (i = 0; i < len; i++)
        {
            if (s[i] == 'U')
                u++;
            else
            {
                if (s[i] == 'D')
                    d++;
                else
                {
                    if (s[i] == 'L')
                        l++;
                    else
                        r++;
                }
            }
        }
        if (x > 0)
        {
            if (y > 0)
            {
                if (x <= r && y <= u)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                if (x <= r && abs(y) <= d)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
        else
        {
            if (y > 0)
            {
                if (abs(x) <= l && y <= u)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                if (abs(x) <= l && abs(y) <= d)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
    return 0;
}