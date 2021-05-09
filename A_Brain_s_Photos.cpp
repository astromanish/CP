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
    int n, m;
    cin >> n >> m;
    bool bnw = true;
    char c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c;
            if (c == 'C' || c == 'M' || c == 'Y')
            {
                bnw = false;
                cout << "#Color" << endl;
                break;
            }
                }
        if (!bnw)
            break;
    }
    if (bnw)
        cout << "#Black&White" << endl;
    return 0;
}