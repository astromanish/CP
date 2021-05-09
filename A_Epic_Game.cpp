
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
    int a, b, n;
    cin >> a >> b >> n;
    int left = n;
    int g;
    bool turn = true;
    while (1)
    {
        if (turn)
        {
            int g = __gcd(a, left);
            if (left >= g)
            {
                left -= g;
            }
            else
            {
                cout << 1 << endl;
                break;
            }
        }
        else
        {
            int g = __gcd(b, left);
            if (left >= g)
            {
                left -= g;
            }
            else
            {
                cout << 0 << endl;
                break;
            }
        }
        turn = !turn;
    }
    return 0;
}