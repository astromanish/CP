
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
    int test;
    cin >> test;
    string s;
    while (test--)
    {
        cin >> s;
        int l = s.length();
        bool turn = true;
        int t = l;
        while (t)
        {
            if (turn)
            {
                if (s[l - t] == 'a')
                    s[l - t] = 'b';
                else
                    s[l - t] = 'a';
            }
            else
            {
                if (s[l - t] == 'z')
                    s[l - t] = 'y';
                else
                    s[l - t] = 'z';
            }
            turn = !turn;
            t--;
        }
        cout << s << endl;
    }
    return 0;
}