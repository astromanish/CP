
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n - 1; i += 2)
    {
        if ((s[i] == 'a' && s[i + 1] == 'a') || (s[i] == 'b' && s[i + 1] == 'b'))
        {
            if (s[i] == 'a' && s[i + 1] == 'a')
            {
                s[i + 1] = 'b';
            }
            else
            {
                s[i + 1] = 'a';
            }
            cnt++;
        }
    }
    cout << cnt << endl
         << s << endl;
    return 0;
}