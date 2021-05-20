
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
            for (i = 0; i < n; i++)
            {
                if (s[i] == '2')
                {
                    if (s[i + 1] == '0')
                    {
                        if (s[i + 2] == '2')
                        {
                            if (s[i + 3] == '0')
                            {
                                if (i == 0 || i + 3 == n - 1)
                                    p = true;
                            }
                            else
                            {
                                for (j = i + 4; j < n; j++)
                                {
                                    if (s[j] == '0')
                                    {
                                        if (i == 0 && j == n - 1)
                                        {
                                            p = true;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            for (j = i + 3; j < n; j++)
                            {
                                if (s[j] == '2' && s[j + 1] == '0')
                                {
                                    if (i == 0 && j + 1 == n - 1)
                                    {
                                        p = true;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        for (j = i + 2; j < n; j++)
                        {
                            if (s[j] == '0' && s[j + 1] == '2' && s[j + 2] == '0')
                            {
                                if (i == 0 && j + 2 == n - 1)
                                {
                                    p = true;
                                    break;
                                }
                            }
                        }
                    }
                }
                if (p)
                    break;
            }
        }

        if (p)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}