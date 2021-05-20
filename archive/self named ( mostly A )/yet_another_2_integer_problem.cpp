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
    int a, b;
    while (t--)
    {
        cin >> a >> b;
        if (b > a)
        {
            if ((b - a) % 10 == 0)
                cout << (b - a) / 10 << endl;
            else
                cout << (b - a) / 10 + 1 << endl;
        }
        else
        {
            if (b < a)
            {
                if ((a - b) % 10 == 0)
                    cout << (a - b) / 10 << endl;
                else
                    cout << (a - b) / 10 + 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}