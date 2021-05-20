
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a <= c; a++)
#define fb(a, b, c) for (int a = b; a >= c; a--)

#define MOD 1e9 + 7

int main()
{
    int n;
    cin >> n;
    int arr[n];
    ff(i, 0, n - 1)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    int a[n] = {0};
    sort(arr, arr + n);
    ff(i, 0, n - 1)
    {
        if (!a[i])
        {
            ff(j, i + 1, n - 1)
            {
                if (!a[j] && arr[j] % arr[i] == 0)
                {
                    a[j] = true;
                }
            }
            a[i] = true;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}