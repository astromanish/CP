
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
    int n;
    string s;
    int i, j, k;

    while (t--)
    {
        cin >> n;
        cin >> s;
        bool p = false;
        if (s == "2020")
            p = true;
        else
        {
            if (s[0] == '2' || s[n - 1] == '0')
            {
                if (s[0] == '2' && s[n - 1] == '0')
                {
                    if (s[1] == '0')
                    {
                        if (s[n - 2] == '2')
                            p = true;
                        else
                        {
                            if (s[2] == '2')
                                p = true;
                        }
                    }
                    else
                    {
                        if (s[n - 2] == '2' && s[n - 3] == '0')
                            p = true;
                    }
                }
                else
                {
                    if (s[0] == '2')
                    {
                        if (s[1] == '0' && s[2] == '2' && s[3] == '0')
                            p = true;
                    }
                    else
                    {
                        if (s[n - 2] == '2' && s[n - 3] == '0' && s[n - 4] == '2')
                            p = true;
                    }
                }
            }
        }

        if (p)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}