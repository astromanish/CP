
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
    int n, m, k, x, y;
    int i, j;
    int w, h;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        int c;
        while (1)
        {
            c = 0;
            for (i = 1; i < n; i++)
            {
                if (s[i - 1] == 'A' && s[i] == 'P')
                {
                    c++;
                    s[i] = 'A';
                    i++;
                }
            }
            if (c)
                cnt++;
            else
                break;
        }
        cout << cnt << endl;
    }
    return 0;
}