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
    int t;
    cin >> t;
    int N, x, k;
    char a[3][3];
    while (t--)
    {
        int cnt_dash = 0, cnt_X = 0, cnt_O = 0;
        ff(i, 0, 3)
        {
            ff(j, 0, 3)
            {
                cin >> a[i][j];
                if (a[i][j] == '_')
                    cnt_dash++;
                else
                {
                    if (a[i][j] == 'O')
                        cnt_O++;
                    else
                        cnt_X++;
                }
            }
        }
        int cnt_win = 0, cnt_Xwin = 0;
        ff(i, 0, 3)
        {
            if (a[i][0] == a[i][1] && a[i][1] == a[i][2])
            {
                if (a[i][0] == 'X' || a[i][0] == 'O')
                {
                    cnt_win++;
                    if (a[i][0] == 'X')
                        cnt_Xwin++;
                }
            }
            if (a[0][i] == a[1][i] && a[1][i] == a[2][i])
            {
                if (a[0][i] == 'X' || a[0][i] == 'O')
                {
                    cnt_win++;
                    if (a[0][i] == 'X')
                        cnt_Xwin++;
                }
            }
        }
        if (a[0][0] == a[1][1] && a[1][1] == a[2][2])
        {
            if (a[0][0] == 'X' || a[0][0] == 'O')
            {
                cnt_win++;
                if (a[0][0] == 'X')
                    cnt_Xwin++;
            }
        }
        if (a[0][2] == a[2][0] && a[2][0] == a[1][1])
        {
            if (a[0][2] == 'X' || a[0][2] == 'O')
            {
                cnt_win++;
                if (a[0][2] == 'X')
                    cnt_Xwin++;
            }
        }

        if (cnt_O == (9 - cnt_dash) / 2)
        {
            if (cnt_win > 1)
            {
                if (cnt_dash == 0 && cnt_Xwin == 2)
                    cout << 1 << endl;
                else
                    cout << 3 << endl;
            }
            else
            {
                if (cnt_win == 1)
                    cout << 1 << endl;
                else
                {
                    if (cnt_dash)
                        cout << 2 << endl;
                    else
                        cout << 1 << endl;
                }
            }
        }
        else
            cout << 3 << endl;
    }
    return 0;
}