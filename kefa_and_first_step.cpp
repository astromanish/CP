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
    int n, i;
    cin >> n;
    vector<int> v;
    int a;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    vector<int> ans;
    int cnt = 0;
    int last = v[0];
    int cur;
    for (i = 0; i < n; i++)
    {
        cur = v[i];
        if (cur >= last)
            cnt++;
        else
            cnt = 1;
        if (i == (n - 1) || v[i + 1] < v[i])
            ans.push_back(cnt);
        last = cur;
    }
    cout << *max_element(all(ans)) << endl;
    return 0;
}