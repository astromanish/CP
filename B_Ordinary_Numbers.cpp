
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
    int n;
    while (t--)
    {
        cin >> n;

        int temp = n;
        int c = 0;
        int l;
        while (temp != 0)
        {
            l = temp % 10;
            temp /= 10;
            c++;
        }
        int cnt;
        int m = 0;
        for (int i = 1; i <= c; i++)
        {
            m *= 10;
            m += 1;
        }
        m *= l;
        if (m <= n)
            cnt = 9 * (c - 1) + l;
        else
            cnt = 9 * (c - 1) + l - 1;
        cout << cnt << endl;
    }
    return 0;
}