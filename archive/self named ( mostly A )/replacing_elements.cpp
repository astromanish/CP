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
    int t, n, d, i;
    cin >> t;
    while (t--)
    {
        cin >> n, d;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int a = *max_element(arr, arr + n);
        if (a <= d)
        {
            cout << "YES" << endl;
        }
        else
        {
            sort(arr, arr + n);
            if (arr[0] <= d / 2 && arr[1] <= d / 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}