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
    int a[4];
    int i;
    for (i = 0; i < 4; i++)
        cin >> a[i];
    string s;
    cin >> s;
    int l = s.length();
    int sum = 0;
    for (i = 0; i < l; i++)
    {
        int ar = s[i];
        sum += a[ar - 49];
    }
    cout << sum << endl;

    return 0;
}