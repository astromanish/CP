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
    int n, k;
    cin >> n >> k;
    int cur;
    int arya = 0, bran = 0;
    int day = 1;
    while (1)
    {
        cin >> cur;
        arya += cur;
        if (k - bran > 8)
        {
            if (arya >= 8)
            {
                bran += 8;
                arya -= 8;
            }
            else
            {
                bran += arya;
                arya = 0;
            }
        }
        else
        {
            if (arya >= (k - bran))
                break;
        }
        if (day == n)
        {
            day = -1;
            break;
        }
        else
            day++;
    }
    cout << day << endl;
    return 0;
}