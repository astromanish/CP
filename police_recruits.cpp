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
    int i, cnt = 0;
    int off = 0;
    for (i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        if (cur == -1)
        {
            if (off == 0)
            {
                cnt++;
            }
            else
            {
                off--;
            }
        }
        else
        {
            off += cur;
        }
    }
    cout << cnt << endl;

    return 0;
}