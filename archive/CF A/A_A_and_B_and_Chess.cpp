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
    int w = 0, b = 0;
    char c;
    ff(i, 0, 8)
    {
        ff(j, 0, 8)
        {
            cin >> c;
            if (c != '.' && c != 'K' && c != 'k')
            {
                if (c == 'Q' || c == 'R' || c == 'B' || c == 'N' || c == 'P')
                {
                    if (c == 'Q')
                        w += 9;
                    else
                    {
                        if (c == 'R')
                            w += 5;
                        else
                        {
                            if (c == 'B' || c == 'N')
                                w += 3;
                            else
                                w += 1;
                        }
                    }
                }
                else
                {
                    if (c == 'q')
                        b += 9;
                    else
                    {
                        if (c == 'r')
                            b += 5;
                        else
                        {
                            if (c == 'b' || c == 'n')
                                b += 3;
                            else
                                b += 1;
                        }
                    }
                }
            }
        }
    }
    if (b > w)
        cout << "Black" << endl;
    else
    {
        if (b == w)
            cout << "Draw" << endl;
        else
            cout << "White" << endl;
    }
    return 0;
}