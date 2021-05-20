
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
    int n, m, k, x, y;
    int i, j;
    int w, h;
    while (t--)
    {
        cin >> n;
        int arr[n];
        int arr1[n + 1] = {0};
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr1[arr[i]]++;
        }
        vi v;
        for (i = 1; i < n + 1; i++)
        {
            if (arr1[i] == 1)
                v.push_back(i);
        }
        if (v.size())
        {
            sort(all(v));
            int c = v[0];
            for (i = 0; i < n; i++)
            {
                if (arr[i] == c)
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}