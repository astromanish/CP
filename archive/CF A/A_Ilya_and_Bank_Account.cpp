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
    if (n < 0)
    {
        int a = n / 10;
        int temp = n % 10;
        n /= 10;
        n /= 10;
        int b = 10 * n + temp;
        if (a >= b)
        {
            cout << a;
        }
        else
            cout << b;
    }
    else
        cout << n;
    return 0;
}