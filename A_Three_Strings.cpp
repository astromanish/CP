
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a <= c; a++)
#define fb(a, b, c) for (int a = b; a >= c; a--)

#define MOD 1e9 + 7

int main()
{
    int t;
    cin >> t;
    string a, b, c;
    while (t--)
    {
        cin >> a >> b >> c;
        int l = a.length();
        int arr[l] = {0};
        ff(i, 0, l - 1)
        {
            if (a[i] == c[i] && !arr[i])
                arr[i] == true;
        }
        ff(i, 0, l - 1)
        {
            if (b[i] == c[i] && !arr[i])
                arr[i] == true;
        }
        int cnt = 0;
        ff(i, 0, l - 1)
        {
            if (arr[i])
                cnt++;
        }
        if (cnt == l)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}