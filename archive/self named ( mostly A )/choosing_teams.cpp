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
    int n, k, i;
    cin >> n >> k;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    int cnt = 0;
    sort(a, a + n);
    int c = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] + k <= 5)
            c++;
        if (c == 3)
        {
            cnt++;
            c = 0;
        }
    }
    cout << cnt << endl;

    return 0;
}