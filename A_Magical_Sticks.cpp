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
        if (n % 2 == 0)
            cout << n / 2 << endl;
        else
            cout << n / 2 + 1 << endl;
    }
    return 0;
}