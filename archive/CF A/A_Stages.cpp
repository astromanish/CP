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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    sort(all(s));
    char last;
    int cur = 0;
    int w = 0;
    int stage = 0;
    bool p = false;
    while (cur < n)
    {
        if (s[cur] - last >= 2 || cur == 0)
        {
            w += s[cur] - 'a' + 1;
            last = s[cur];
            stage++;
        }
        if (stage == k)
        {
            p = true;
            break;
        }
        cur++;
    }
    if (p)
        cout << w << endl;
    else
        cout << -1 << endl;
    return 0;
}