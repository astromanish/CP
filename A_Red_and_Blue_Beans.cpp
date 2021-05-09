
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
    int r, b, d;
    while (t--)
    {
        cin >> r >> b >> d;

        if (r == b)
        {
            cout << "YES" << endl;
            continue;
        }
        int D;
        if (r > b)
        {
            D = r - b;
            if (D % b == 0)
            {
                if (D / b <= d)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                if (D / b + 1 <= d)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
        else
        {
            D = b - r;
            if (D % r == 0)
            {
                if (D / r <= d)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                if (D / r + 1 <= d)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
    return 0;
}