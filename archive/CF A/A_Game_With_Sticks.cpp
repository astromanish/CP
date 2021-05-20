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
    int n, m;
    cin >> n >> m;
    bool akshat = true;
    while (1)
    {
        if (akshat)
        {
            if (n == 1 || m == 1)
            {
                cout << "Akshat";
                break;
            }
            else
            {
                n--;
                m--;
            }
        }
        else
        {
            if (n == 1 || m == 1)
            {
                cout << "Malvika";
                break;
            }
            else
            {
                n--;
                m--;
            }
        }
        akshat = !akshat;
    }
    return 0;
}