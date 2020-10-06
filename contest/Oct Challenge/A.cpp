#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);
    ll n, k;
    while (T--)
    {
        scanf("%lld %lld", &n, &k);
        ll arr[n];
        ll i;
        for (i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        ll current, remain = 0;
        for (i = 0;; i++)
        {
            if (i < n)
            {
                current = arr[i];
            }
            else
            {
                current = 0;
            }

            if (current + remain < k)
            {
                printf("%lld\n", i + 1);
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