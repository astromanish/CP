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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool exist = false;
    int k;
    cin >> k;
    string s;
    cin >> s;
    int arr[26] = {0};
    int i;
    for (i = 0; i < s.size(); i++)
    {
        cout << int(s[i]) - 65;
        arr[int(s[i]) - 65]++;
    }
    sort(arr, arr + 26);
    string ans;
    for (i = 25; i >= 0; i++)
    {
        if (arr[i] == 0)
            break;
        if (arr[i] % k == 0)
        {
            exist = false;
            break;
        }
        else
        {
            exist = true;
            ans += char(i + 65);
        }
    }
    if (exist)
    {
        for (i = 0; i < k; i++)
        {
            cout << ans;
        }
    }
    if (!exist)
    {
        cout << -1 << endl;
    }
    return 0;
}