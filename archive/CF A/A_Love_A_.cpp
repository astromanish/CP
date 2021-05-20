
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
    int cnt = 0;
    for (i = 0; i < l; i++)
    {
        if (s[i] == 'a')
            cnt++;
    }
    while (l)
    {
        if (cnt > (l / 2))
            break;
        l--;
    }
    cout << l << endl;
    return 0;
}