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
    int t;
    scanf("%d", &t);
    int n;
    string s;

    while (t--)
    {
        scanf("%d", &n);
        scanf("%s", &s);
        int cnt0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                cnt0++;
        }
        if (cnt0 % 2 == 0)
        {
            if ((cnt0 / 2) % 2 == 0)
                printf("DRAW\n");
            else
                printf("BOB\n");
        }
        else
        {
            cnt0 -= 1;
            if ((cnt0 / 2) % 2 == 0)
                printf("BOB\n");
            else
                printf("ALICE\n");
        }
    }
    return 0;
}