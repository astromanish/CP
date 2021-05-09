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
    int n, m, i;

    ll cnt = 0;
    cin >> n >> m;
    int x, y, z;
    int arr[n];
    while (m--)
    {
        cin >> x >> y >> z;
        for (i = 1; i <= n; i++)
            arr[i] = i;
        do
        {
            int c = 0;
            for (i = 0; i < x; i++)
            {
                if (arr[i] <= y)
                    c++;
            }
            if (c <= z)
                cnt++;
        } while (next_permutation(arr, arr + n));
    }
    cout << cnt << endl;

    return 0;
}