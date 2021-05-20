
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
    int n, i;
    while (t--)
    {
        cin >> n;
        for (i = 2; i <= n; i++)
            cout << i << " ";
        cout << 1 << endl;
    }
    return 0;
}