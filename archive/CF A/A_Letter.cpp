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
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    int i, j;
    int a, b, c, d;
    bool first = true;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '*')
            {
                if (first)
                {
                    a = b = i;
                    c = d = j;
                    first = false;
                }
                else
                {
                    a = min(a, i);
                    b = max(b, i);
                    c = min(c, j);
                    d = max(d, j);
                }
            }
        }
    }
    //cout << a << b << c << d;
    for (i = a; i <= b; i++)
    {
        for (j = c; j <= d; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}