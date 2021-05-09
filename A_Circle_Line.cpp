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
    int arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    int a, b;
    cin >> a >> b;
    int d1 = 0, d2 = 0;
    int cur = a;
    while (cur != b)
    {
        d1 += arr[cur - 1];
        if (cur == n)
            cur = 1;
        else
            cur++;
    }
    cur = b;
    while (cur != a)
    {
        d2 += arr[cur - 1];
        if (cur == n)
            cur = 1;
        else
            cur++;
    }
    cout << (d1 < d2 ? d1 : d2) << endl;
    return 0;
}