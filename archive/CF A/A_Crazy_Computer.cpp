
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
    int n, c;
    cin >> n >> c;
    int cnt = 1;
    int i;
    int last;
    cin >> last;
    int cur;
    for (i = 1; i < n; i++)
    {
        cin >> cur;
        if (cur - last <= c)
            cnt++;
        else
            cnt = 1;
        last = cur;
    }
    cout << cnt << endl;

    return 0;
}