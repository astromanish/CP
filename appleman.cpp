#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    ll arr[26] = {0};
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll i;
    for (i = 0; i < n; i++)
    {
        arr[int(s[i]) - 65]++;
    }
    sort(arr, arr + 26);
    ll ans = 0;
    for (i = 25; i >= 0 && k > 0; i--)
    {
        if (arr[i] >= k)
        {
            ans += k * k;
            k = 0;
        }
        else
        {
            ans += arr[i] * arr[i];
            k -= arr[i];
        }
    }
    cout << ans;
    return 0;
}