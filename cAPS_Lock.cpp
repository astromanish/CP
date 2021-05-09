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
    int i;
    bool c = false;
    int d = s[0];
    if (d >= 65 && d <= 90)
        d = true;
    int cnt;
    for (i = 1; i < l; i++)
    {
        int b = s[i];
        cnt = 0;
        if (b >= 65 && b <= 90)
            cnt++;
    }
    int f;
    if (d && cnt == l - 1)
        f = 1;
    if (!d && cnt == l - 1)
        f = 2;

    if (f == 1 || f == 2)
    {
        for (i = 0; i < l; i++)
        {
            int a = s[i];
            if (i == 0 && a >= 97 && a <= 122)
            {
                a = a - 32;
                s[i] = char(a);
            }
            if (i != 0 && a >= 65 && a <= 90)
            {
                a = a + 32;
                s[i] = char(a);
            }
        }
    }
    cout << s << endl;
    return 0;
}