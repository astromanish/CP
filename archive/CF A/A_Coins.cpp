
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
    int n, S;
    cin >> n >> S;
    int cnt = 0;
    if (S >= n)
    {
        if (S % n == 0)
            cnt += S / n;
        else
            cnt += S / n + 1;
    }
    else
        cnt = 1;

    cout << cnt << endl;
    return 0;
}