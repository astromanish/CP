
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
    string s;
    cin >> s;
    int l = s.length();
    int a;
    int cnt = 0;
    int cur = 0;
    for (int i = 0; i < l; i++)
    {
        int d1, d2;
        a = s[i];
        if (cur > (a - 97))
        {
            d1 = cur - (a - 97);
            d2 = 26 - cur + (a - 97);
            if (d1 <= d2)
                cnt += d1;
            else
                cnt += d2;
        }
        else
        {
            if (cur < (a - 97))
            {
                d1 = (a - 97) - cur;
                d2 = 26 - (a - 97) + cur;
                if (d1 <= d2)
                    cnt += d1;
                else
                    cnt += d2;
            }
        }
        cur = a - 97;
    }
    cout << cnt << endl;
    return 0;
}