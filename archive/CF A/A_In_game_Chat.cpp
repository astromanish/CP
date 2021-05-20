
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
        for (i = n - 1; i >= 0; i--)
        {
            if (s[i] == ')')
                cnt++;
            else
                break;
        }
        if (cnt > (n - cnt))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}