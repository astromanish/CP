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
    int x, n, m;
    while (t--)
    {
        cin >> x >> n >> m;
        bool p=false;
        n+=1;
        while (n--)
        {
         
            if (x-10*m <= 0)
            {
                cout << "YES" << endl;
                p=true;
                break;
            }
            x = x / 2 + 10;
        }
        if(!p)
            cout << "NO" << endl;
    }
    return 0;
}