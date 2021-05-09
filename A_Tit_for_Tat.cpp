
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
    while (t--)
    {
        cin >> n >> k;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        bool h = false;
        while (k--)
        {

            for (i = 0; i < n; i++)
            {
                if (arr[i] != 0)
                {
                    if (i != n - 1)
                    {
                        arr[i]--;
                        arr[n - 1]++;
                        break;
                    }
                    else
                    {
                        h = true;
                        break;
                    }
                }
            }
            if (h)
                break;
        }
        for (i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}