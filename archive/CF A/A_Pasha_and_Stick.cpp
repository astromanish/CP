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
    if (n % 2 == 0)
    {
        n /= 2;
        if (n % 2 == 0)
        {
            cout << n / 2 - 1;
        }
        else
        {
            cout << n / 2;
        }
    }
    else
        cout << 0;
    return 0;
}