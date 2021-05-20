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
    int R, C;
    cin >> R >> C;
    string a[R];
    int cnt = 0, cnt1 = 0;
    ff(i, 0, R)
    {
        cin >> a[i];
        ff(j, 0, C)
        {
            if (a[i][j] == 'W')
                cnt++;
            else
            {
                if (a[i][j] == '.')
                    cnt1++;
            }
        }
    }
    // cout << cnt << endl
    //      << cnt1;
    if (!cnt)
    {
        cout << "Yes" << endl;
        ff(i, 0, R)
        {
            ff(j, 0, C)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        if (!cnt1 && cnt != R * C)
        {
            cout << "No" << endl;
        }
        else
        {
            ff(i, 0, R)
            {
                ff(j, 0, C)
                {
                    if (a[i][j] == 'S')
                    {
                        if (i != R - 1)
                        {
                            if (a[i + 1][j] != 'W')
                            {
                                if (a[i + 1][j] == '.')
                                    a[i + 1][j] = 'D';
                            }
                            else
                            {
                                cout << "No" << endl;
                                return 0;
                            }
                        }
                        if (i != 0)
                        {
                            if (a[i - 1][j] != 'W')
                            {
                                if (a[i - 1][j] == '.')
                                    a[i - 1][j] = 'D';
                            }
                            else
                            {
                                cout << "No" << endl;
                                return 0;
                            }
                        }
                        if (j != C - 1)
                        {
                            if (a[i][j + 1] != 'W')
                            {
                                if (a[i][j + 1] == '.')
                                    a[i][j + 1] = 'D';
                            }
                            else
                            {
                                cout << "No" << endl;
                                return 0;
                            }
                        }
                        if (j != 0)
                        {
                            if (a[i][j - 1] != 'W')
                            {
                                if (a[i][j - 1] == '.')
                                    a[i][j - 1] = 'D';
                            }
                            else
                            {
                                cout << "No" << endl;
                                return 0;
                            }
                        }
                    }
                }
            }
            cout << "Yes" << endl;
            ff(i, 0, R)
            {
                ff(j, 0, C)
                {
                    cout << a[i][j];
                }
                cout << endl;
            }
        }
    }
    return 0;
}