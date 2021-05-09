#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define PI 3.1415926535
#define maxn 100005
#define all(x) x.begin(), x.end()
#define speedUp                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
void Manish()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(all(v), greater<int>());
    int val = v[0];
    for (int i = 1; i <= k; i++)
        val += v[i];
    cout << val << "\n";
}
signed main()
{
    speedUp int t;
    cin >> t;
    while (t--)
        Manish();
    return 0;
}