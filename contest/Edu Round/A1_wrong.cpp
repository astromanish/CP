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
        bool exist = false;
        int i, j, k;
        for (i = 0; i <= 333; i++)
        {
            for (j = 0; j <= 200; j++)
            {
                for (k = 0; k < 143; k++)
                {
                    if (3 * i + 5 * j + 7 * k == n)
                    {
                        cout << i << " " << j << " " << k << endl;
                        exist = true;
                        break;
                    }
                }
                if (exist == true)
                    break;
            }
            if (exist == true)
                break;
        }
        if (!exist)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}