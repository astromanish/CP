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
    int n, m;
    cin >> n >> m;
    int arr[n];
    ff(i, 0, n)
    {
        cin >> arr[i];
    }
    int sum = 0;
    int bus = 0;
    int cur = 0;
    while (1)
    {
        if (sum + arr[cur] > m)
        {
            bus++;
            sum = 0;
        }
        else
        {
            if (sum + arr[cur] == m)
            {
                bus++;
                cur++;
                sum = 0;
                if (cur == n)
                    break;
            }
            else
            {
                sum += arr[cur];
                cur++;
                if (cur == n)
                {
                    bus++;
                    break;
                }
            }
        }
    }
    cout << bus << endl;
    return 0;
}