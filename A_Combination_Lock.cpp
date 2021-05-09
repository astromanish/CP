
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
    int n;
    cin >> n;
    string cur, sec;
    cin >> cur;
    cin >> sec;
    int l = cur.length();
    int i;
    int cnt = 0;
    int a, b;
    int d1, d2;
    for (i = 0; i < l; i++)
    {
        a = cur[i];
        b = sec[i];
        a -= 48;
        b -= 48;
        if (a > b)
        {
            d1 = a - b;
            d2 = 10 - a + b;
            if (d1 <= d2)
                cnt += d1;
            else
                cnt += d2;
        }
        else
        {
            if (b > a)
            {
                d1 = b - a;
                d2 = 10 - b + a;
                if (d1 <= d2)
                    cnt += d1;
                else
                    cnt += d2;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}