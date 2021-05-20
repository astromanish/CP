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
    int a[3];
    int i;
    for (i = 0; i < 3; i++)
        cin >> a[i];
    sort(a, a + 3);
    vector<int> ans;
    for (i = a[0]; i <= a[2]; i++)
    {
        int d = abs(a[0] - i) + abs(a[1] - i) + abs(a[2] - i);
        ans.push_back(d);
    }
    cout << *min_element(all(ans)) << endl;
    return 0;
}
