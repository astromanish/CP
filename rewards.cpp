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
    int a[3], b[3], i, n;
    ll sumA = 0, sumB = 0;
    for (i = 0; i < 3; i++)
    {
        cin >> a[i];
        sumA += a[i];
    }
    for (i = 0; i < 3; i++)
    {
        cin >> b[i];
        sumB += b[i];
    }
    cin >> n;
    int cnt = 0;
    if (sumA % 5 != 0)
        cnt++;
    if (sumB % 10 != 0)
        cnt++;

    if (n - sumA / 5 - sumB / 10 - cnt >= 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}