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
    if (n == 0)
        cout << 0 << " " << 0 << " " << 0 << endl;
    else
    {
        if (n == 1)
            cout << 1 << " " << 0 << " " << 0 << endl;
        else
        {
            int b1, b2;
            int a = 0, b = 1;
            while (1)
            {
                if (a + b == n)
                {
                    cout << b1 << " " << b2 << " " << b << endl;
                    break;
                }
                b1 = b - a;
                b2 = a;
                int temp = b;
                b = a + b;
                a = temp;
                // cout << b1 << " " << b2 << " " << a << " " << b << endl;
            }
        }
    }
    return 0;
}