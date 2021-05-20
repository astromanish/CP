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
    int n;
    while (t--)
    {
        cin >> n;
        ff(i, 2, 30)
        {
            int num = pow(2, i) - 1;
            if (n % num == 0)
            {
                cout << n / num << endl;
                break;
            }
        }
    }
    return 0;
}