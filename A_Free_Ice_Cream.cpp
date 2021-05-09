
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
    int n, x;
    cin >> n >> x;
    ll i_left = x;
    int cnt = 0;
    char d_ya_l;
    int kitna;
    while (n--)
    {
        cin >> d_ya_l >> kitna;
        if (d_ya_l == '+')
        {
            i_left += kitna;
        }
        else
        {
            if (kitna <= i_left)
            {
                i_left -= kitna;
            }
            else
            {
                cnt++;
            }
        }
    }
    cout << i_left << " " << cnt;
    return 0;
}