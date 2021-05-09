
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
    char ch;
    for (int i = l - 1; i >= 0; i--)
    {
        if (s[i] != '?' || s[i] != ' ')
        {
            ch = s[i];
            break;
        }
    }
    if (ch == 'A' && ch == 'E' && ch == 'I' && ch == 'O' && ch == 'U' && ch == 'a' && ch == 'e' && ch == 'i' && ch == 'o' && ch == 'u')
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}