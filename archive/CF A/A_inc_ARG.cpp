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
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s[0] == '0')
        cout << 1 << endl;
    else
    {
        int cnt = 0;
        ff(i, 0, n)
        {
            if (s[i] == '1')
                cnt++;
            else
                break;
        }
        if (cnt != n)
            cout << cnt + 1 << endl;
        else
            cout << cnt << endl;
    }

    return 0;
}