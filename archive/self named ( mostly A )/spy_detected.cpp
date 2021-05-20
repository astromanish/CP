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
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] == arr[1])
        {
            for (i = 2; i < n; i++)
            {
                if (arr[i] != arr[0])
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
        else
        {
            if (arr[1] == arr[2])
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}