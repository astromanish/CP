
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
    int n;
    int i, j;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        int cnt = 0;
        for (i = 0; i < n; i++)
            for (j = i + 1; j < n; j++)
            {
                if (arr[j] - arr[i] == j - i)
                    cnt++;
            }
        cout << cnt << endl;
    }
    return 0;
}