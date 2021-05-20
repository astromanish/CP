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
    int k;
    cin >> k;
    int a[12];
    ff(i, 0, 12)
            cin >>
        a[i];
    sort(a, a + 12, greater<>());
    int cnt = 0;
    int i = 0;
    int cur = 0;
    ff(i, 0, 12)
    {
        if (cur < k)
        {
            cur += a[i];
            cnt++;
            if (i == 11 && cur < k)
                cnt = -1;
        }
        else
            break;
    }
    cout << cnt << endl;
    return 0;
}