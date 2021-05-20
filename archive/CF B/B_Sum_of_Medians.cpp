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

const int N = 1e6;
int arr[N];

int main()
{
    int t;
    cin >> t;
    int n;
    int k;
    while (t--)
    {
        cin >> n >> k;
        ff(i, 0, n * k)
        {
            cin >> arr[i];
        }
        int num;
        if (n % 2 == 0)
        {
            num = (n / 2) + 1;
        }
        else
        {
            num = n / 2;
        }
        int sum = 0;
        int cur = num;
        while (k--)
        {
            sum += arr[n * k - cur];
            cur -= n;
        }
        cout << sum << endl;
    }
    return 0;
}