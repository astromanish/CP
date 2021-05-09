
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
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        int cnt = 0;
        if (n == 2)
            cnt = 2;
        else
        {
            if (n % 2 == 0)
                cnt = 0;
            else
                cnt = 1;
        }
        cout << cnt << endl;
    }
    return 0;
}
