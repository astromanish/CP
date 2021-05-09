
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
    while (t--)
    {
        cin >> n;
        int a[26] = {0};
        int i, l, j, b;
        string s;
        for (i = 0; i < n; i++)
        {
            cin >> s;
            l = s.length();
            for (j = 0; j < l; j++)
            {
                b = s[j];
                a[b - 97]++;
            }
        }
        int cnt = 0;
        for (i = 0; i < 26; i++)
        {
            if (a[i] % n == 0)
                cnt++;
        }
        if (cnt == 26)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}