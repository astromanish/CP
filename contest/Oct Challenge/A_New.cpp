#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    int T;
    cin >> T;
    ll n, k;
    while (T--)
    {
        cin >> n >> k;
        ll arr[n];
        ll i;
        ll current, remain = 0;
        for (i = 0;; i++)
        {
            if (i < n)
            {
                cin >> arr[i];
                current = arr[i];
            }
            else
            {
                current = 0;
            }

            if (current + remain < k)
            {
                cout << i + 1 << "\n";
                break;
            }
            else
            {
                remain += current - k;
            }
        }
    }
    return 0;
}