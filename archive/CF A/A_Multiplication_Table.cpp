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
    int n, x;
    cin >> n >> x;
    int cnt = 0;
    ff(i, 1, n + 1)
    {
        if (x % i == 0 && x / i <= n)
            cnt++;
    }
    cout << cnt;
    return 0;
}