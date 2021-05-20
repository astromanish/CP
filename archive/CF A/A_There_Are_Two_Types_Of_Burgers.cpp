
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
    int t;
    cin >> t;
    int b, p, f;
    int h, c;
    while (t--)
    {
        cin >> b >> p >> f;
        cin >> h >> c;
        b /= 2;
        int pr = 0;
        if (h >= c)
        {
            if (p >= b)
                pr = b * h;
            else
                pr = p * h + min(b - p, f) * c;
        }
        else
        {
            if (f >= b)
                pr = b * c;
            else
                pr = f * c + min(b - f, p) * h;
        }
        cout << pr << endl;
    }
    return 0;
}