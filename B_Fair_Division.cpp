
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
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int cnt1 = 0, cnt2 = 0;
        for (i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                cnt1++;
            else
                break;
        }
        cnt2 = n - cnt1;
        if (cnt2 % 2 == 0)
        {
            if (cnt1 % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if (cnt1 % 2 == 0)
            {
                if (cnt1 != 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}