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
    int a, b, c;
    cin >> a >> b >> c;
    if (a * c % b == 0)
    {
        cout << (a * c) / b - c << endl;
    }
    else
    {
        cout << (a * c) / b - c + 1 << endl;
    }
    return 0;
}