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
    string s;
    cin >> s;
    int cnt1 = 0, cnt0 = 0;
    ff(i, 0, n)
    {
        if (s[i] == '0')
            cnt0++;
        else
            cnt1++;
    }
    cout << max(cnt1, cnt0) - min(cnt1, cnt0);
    return 0;
}