
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
        for (i = 0; i < n; i++)
            cin >> arr[i];
        int b[n];
        int s = 0, e = n - 1;
        for (i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                b[i] = arr[s];
                s++;
            }
            else
            {
                b[i] = arr[e];
                e--;
            }
        }
        for (i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
    return 0;
}