#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a <= c; a++)
#define fb(a, b, c) for (int a = b; a >= c; a--)

#define MOD 1e9 + 7

int main()
{
    int n, k;
    cin >> n >> k;
    if (n % k == 0)
        cout << n + k << endl;
    else
        cout << n + (k - n % k) << endl;
    return 0;
}