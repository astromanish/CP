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
    int n, k, x, y;
    while (t--)
    {
        cin >> x;
        int cnt = 0;
        int a = x % 10;
        while (x != 0)
        {
            cnt++;
            x /= 10;
        }
        cout << (a - 1) * 10 + cnt * (cnt + 1) / 2 << endl;
    }
    return 0;
}