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
    int t;
    cin >> t;
    int a[3];
    while (t--)
    {
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        cout << (a[0] + a[1] + 1 >= a[2] ? "Yes" : "No") << endl;
    }
    return 0;
}