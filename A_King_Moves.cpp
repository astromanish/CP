
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
    string s;
    cin >> s;
    if (s[0] >= 'b' && s[0] <= 'g')
    {
        if (s[1] >= '2' && s[1] <= '7')
        {
            cout << 8 << endl;
        }
        else
        {
            cout << 5 << endl;
        }
    }
    else
    {
        if (s[1] >= '2' && s[1] <= '7')
        {
            cout << 5 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
    return 0;
}