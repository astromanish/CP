
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
    int n, m, k, x, y, z;
    int i, j;
    while (t--)
    {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        if (arr[1] != arr[2])
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << arr[0] << " " << arr[0] << " " << arr[2] << endl;
        }
    }
    return 0;
}