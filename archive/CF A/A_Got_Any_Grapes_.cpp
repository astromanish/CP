
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
    int x, y, z;
    cin >> x >> y >> z;
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= x && (a - x + b) >= y && (c + (a + b - x - y)) >= z)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}