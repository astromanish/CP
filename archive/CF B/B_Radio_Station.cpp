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
    int n, m;
    cin >> n >> m;
    string server[n][2];
    ff(i, 0, n)
    {
        cin >> server[i][0] >> server[i][1];
        server[i][1].push_back(';');
    }
    string a, b, c;
    ff(i, 0, m)
    {
        cin >> a >> b;

        ff(j, 0, n)
        {
            if (b == server[j][1])
            {
                c = server[j][0];
                break;
            }
        }
        cout << a << " " << b << " #" << c << endl;
    }
    return 0;
}