#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)
#define fb(a, b, c) for (int a = b; a > c; a--)

#define MOD 1e9 + 7

int main()
{
    int a, b;
    cin >> a >> b;
    vi v;
    v.push_back(b);
    while (1)
    {
        if (b == a || b < a)
        {
            if (b < a)
            {
                cout << "NO";
                return 0;
            }
            else
            {
                cout << "YES" << endl;
                break;
            }
        }
        if (b % 10 == 1 || b % 2 == 0)
        {
            if (b % 10 == 1)
            {
                b /= 10;
            }
            else
            {
                b /= 2;
            }
        }
        else
        {
            cout << "NO";
            return 0;
        }

        v.push_back(b);
    }
    cout << v.size() << endl;
    for (auto it = v.rbegin(); it != v.rend(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}