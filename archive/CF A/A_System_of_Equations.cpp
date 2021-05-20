
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
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    int a, b;
    int max_value = sqrt(max(n, m));
    for (int i = 0; i <= max_value; i++)
    {
        if (n > m)
        {
            a = i;
            b = n - i * i;
            if (b * b + a == m)
                cnt++;
        }
        else
        {
            b = i;
            a = m - i * i;
            if (a * a + b == n)
                cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}