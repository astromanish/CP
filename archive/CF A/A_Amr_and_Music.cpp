#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)
#define fb(a, b, c) for (int a = b; a > c; a--)

#define MOD 1e9 + 7

int main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    int temp;
    ff(i, 0, n)
    {
        cin >> temp;
        v.push_back(make_pair(temp, i + 1));
    }
    sort(all(v));
    int sum = 0;
    int ans = 0;
    for (auto itr : v)
    {
        if (itr.first + sum < k)
        {
            sum += itr.first;
            ans++;
        }
        else
        {
            if (itr.first + sum == k)
            {
                ans++;
                break;
            }
            else
            {
                break;
            }
        }
    }
    cout << ans << endl;
    ff(i, 0, ans)
    {
        cout << v[i].second << " ";
    }

    return 0;
}