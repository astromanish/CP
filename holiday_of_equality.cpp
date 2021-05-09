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
    int n;
    int i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a = *max_element(arr, arr + n);
    int cnt = 0;
    for (i = 0; i < n; i++)
    {
        cnt += a - arr[i];
    }
    cout << cnt << endl;
    return 0;
}