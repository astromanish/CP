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
    int n, t;
    cin >> n >> t;
    int arr[n - 1];
    ff(i, 0, n - 1)
    {
        cin >> arr[i];
        arr[i] += (i + 1);
    }
    int cur = 1;
    while (1)
    {
        cur = arr[cur - 1];
        if (cur == t)
        {
            cout << "YES";
            return 0;
        }
        else
        {
            if (cur == n)
                break;
        }
    }
    cout << "NO";
    return 0;
}