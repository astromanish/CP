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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        if (n == 1 || n == 2)
        {
            cout << -1 << endl;
            break;
        }
        int t;
        int remain;
        t = n / 3;
        remain = n % 3;
        if (remain == 1)
        {
            if (t >= 2)
            {
                cout << t - 2 << " " << 0 << " " << 1 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            if (remain == 2)
            {
                if (t >= 1)
                {
                    cout << t - 1 << " " << 1 << " " << 0 << endl;
                }
            }
            else
            {
                cout << t << " " << 0 << " " << 0 << endl;
            }
        }
    }

    return 0;
}