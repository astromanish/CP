
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
    int i, j;
    int h, m;
    while (t--)
    {
        cin >> h >> m;
        int l = 0;
        l += (60 - m) + (24 - h - 1) * 60;
        cout << l << endl;
    }
    return 0;
}