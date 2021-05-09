
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a <= c; a++)
#define fb(a, b, c) for (int a = b; a >= c; a--)

#define MOD 1e9 + 7

int main()
{
    int a, b;
    cin >> a >> b;
    bool turn = true;
    int vl_l = a, va_l = b;
    int cur = 1;
    while (1)
    {
        if (turn)
        {
            if (vl_l >= cur)
                vl_l -= cur;
            else
            {
                cout << "Vladik" << endl;
                break;
            }
        }
        else
        {
            if (va_l >= cur)
                va_l -= cur;
            else
            {
                cout << "Valera" << endl;
                break;
            }
        }
        cur++;
        turn = !turn;
    }
    return 0;
}