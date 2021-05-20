
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = s.length();
    int a[l] = {0};
    ff(i, 0, l - 2)
    {
        if (!a[i] && (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'))
        {
            ff(j, i + 1, l - 1)
            {
                if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'y')
                {
                    a[j] = true;
                }
                else
                    break;
            }
        }
    }
    ff(i, 0, l - 1)
    {
        if (!a[i])
            cout << s[i];
    }
    cout << endl;
    return 0;
}