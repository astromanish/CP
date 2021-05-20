
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
    getline(cin, s);
    // cout << s << endl;
    int l = s.length();
    char ch;
    for (int i = l - 1; i >= 0; i--)
    {
        if (s[i] != ' ' && s[i] != '?')
        {
            ch = s[i];
            break;
        }
    }
    // cout << ch << endl;
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y' || ch == 'Y')
        cout
            << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}