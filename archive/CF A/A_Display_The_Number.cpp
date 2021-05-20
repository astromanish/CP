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
        int cnt1 = 0, cnt7 = 0;
        if (n % 2 == 0)
            cnt1 = n / 2;
        else
        {
            cnt7 = 1;
            cnt1 = (n - 3) / 2;
        }
        string res = "";
        ff(i, 0, cnt7)
            res.push_back('7');
        ff(i, 0, cnt1)
            res.push_back('1');
        cout << res << endl;
    }
    return 0;
}