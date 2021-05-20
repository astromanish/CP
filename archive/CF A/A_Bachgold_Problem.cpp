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
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
        for (int i = 0; i < n / 2; i++)
            cout << 2 << " ";
        cout << endl;
    }
    else
    {
        cout << n / 2 << endl;
        for (int i = 0; i < (n / 2) - 1; i++)
            cout << 2 << " ";
        cout << 3 << endl;
    }
    return 0;
}