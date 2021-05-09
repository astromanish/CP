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
    int t, n, k, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        set<int> s;
        double arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        double x;
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                x = abs(arr[i] - arr[j]) / 2;
                if (x != 0)
                    s.insert(x);
            }
        }
        cout << s.size() << endl;
    }

    return 0;
}