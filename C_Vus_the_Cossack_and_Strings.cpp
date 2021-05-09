
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
    string a, b;
    cin >> a >> b;
    int i, j;
    int cnt = 0;
    int la = a.length(), lb = b.length();
    int c;
    for (i = 0; i <= (la - lb); i++)
    {
        c = 0;
        for (j = 0; j < lb; j++)
        {
            if (b[j] != a[i + j])
                c++;
        }
        if (c % 2 == 0)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}