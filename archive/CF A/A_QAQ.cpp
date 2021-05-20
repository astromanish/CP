
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a <= c; a++)
#define fb(a, b, c) for (int a = b; a >= c; a--)

#define MOD 1e9 + 7

int main()
{
    string s;
    cin >> s;
    int l = s.length();
    int cnt = 0;
    int c;
    ff(i, 0, l - 1)
    {
        if (s[i] == 'Q')
        {
            c = 0;
            ff(j, i + 1, l - 1)
            {
                if (s[j] == 'A')
                    c++;
                if (s[j] == 'Q')
                {
                    cnt += c;
                }
            }
        }
    }
    cout << cnt << endl;

    return 0;
}