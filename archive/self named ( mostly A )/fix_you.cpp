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
    int t, n, m, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        char arr[n][m];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        int cnt = 0;
        for (i = 0; i < n - 1; i++)
        {
            if (arr[i][m - 1] == 'R')
                cnt++;
        }
        for (i = 0; i < m - 1; i++)
        {
            if (arr[n - 1][i] == 'D')
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}