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
    string s;
    getline(cin, s);
    int l = s.length();
    int cnt = 0;
    int num;
    if (s[1] == ' ')
    {
        num = s[0] - '0';
    }
    else
    {
        num = (s[0] - '0') * 10 + (s[1] - '0');
    }
    if (s[l - 1] == 'k')
    {
        if (num == 5 || num == 6)
            cout << 53 << endl;
        else
            cout << 52 << endl;
    }
    else
    {
        if (num < 30)
            cout << 12 << endl;
        else
        {
            if (num == 30)
                cout << 11 << endl;
            else
                cout << 7 << endl;
        }
    }
    return 0;
}