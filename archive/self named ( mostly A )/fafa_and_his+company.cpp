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
    cin >> n;
    int cnt = 0;
    for (int l = 1; l <= (n - l); l++)
    {
        if ((n - l) % l == 0)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}