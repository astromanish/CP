
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
    int i;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        string ans;
        char a = s[n - 1];
        for (i = 0; i < n; i++)
            ans.push_back(a);
        cout << ans << endl;
    }
    return 0;
}