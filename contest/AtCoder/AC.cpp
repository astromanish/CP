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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    int T, A, B;
    bool t = false;
    while (q--)
    {
        cin >> T >> A >> B;
        if (T == 1)
        {
            char temp = s[A - 1];
            s[A - 1] = s[B - 1];
            s[B - 1] = temp;
        }
        else
        {
            t = !t;
        }
    }
    if (t)
    {
        for (int i = 0; i < n; i++)
        {
            char t = s[i + 0];
            s[i + 0] = s[n + i];
            s[n + i] = t;
        }
    }
    cout << s << endl;
    return 0;
}