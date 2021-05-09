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
    int t, n, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n;

        int s1 = 0, s2 = 0;
        s1 += pow(2, n);
        n /= 2;
        for (i = 1; i < n; i++)
        {
            s1 += pow(2, i);
        }
        for (i = n; i < 2 * n; i++)
        {
            s2 += pow(2, i);
        }
        cout << s1 - s2 << endl;
    }
    return 0;
}