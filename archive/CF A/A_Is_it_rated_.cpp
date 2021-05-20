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
    int a[n][2];
    int cnt = 0;
    ff(i, 0, n)
    {
        cin >> a[i][0] >> a[i][1];
        if (a[i][0] != a[i][1])
        {
            cout << "rated" << endl;
            return 0;
        }
    }
    ff(i, 0, n)
    {
        ff(j, i + 1, n)
        {
            if (a[j][0] > a[i][0])
            {
                cout << "unrated" << endl;
                return 0;
            }
        }
    }
    cout << "maybe" << endl;
    return 0;
}