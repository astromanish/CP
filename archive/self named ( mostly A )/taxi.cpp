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
    int i;
    int a[n];
    int b[4] = {0};
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i] - 1]++;
    }
    int cnt = 0;
    cnt += b[3];
    if (b[0] >= b[2])
    {
        cnt += b[2];
        b[0] = b[0] - b[2];
    }
    else
    {
        cnt += b[2];
        cnt += b[2] - b[0];
        b[0] = 0;
    }
    cnt += b[1] / 2;
    b[1] = b[1] % 2;
    if (b[0] >= b[1] * 2)
    {
        cnt += b[1];
        b[0] = b[0] - b[1] * 2;
    }
    else
    {
        cnt += b[1];
    }
    cnt += b[0] / 4 + b[0] % 4;

    cout << cnt << endl;
}