
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
    int n, m, k, x, y;
    int i, j;
    int a, b;
    while (t--)
    {
        cin >> a >> b;
        if (b < a)
        {
            if ((a - b) % 2 == 0)
            {
                cout << 1 << endl;
            }
            else
                cout << 2 << endl;
        }
        else
        {
            if (b > a)
            {
                if ((b - a) % 2 == 0)
                {
                    cout << 2 << endl;
                }
                else
                    cout << 1 << endl;
            }
            else
                cout << 0 << endl;
        }
    }
    return 0;
}