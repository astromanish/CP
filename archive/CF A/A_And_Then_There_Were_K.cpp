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
    int t;
    cin >> t;
    int n;
    vector<long> v;
    long num = 2;
    while (1)
    {
        v.push_back(num);
        num = num * 2;
        if (num > 1000000000)
        {
            v.push_back(num);
            break;
        }
    }
    while (t--)
    {
        cin >> n;
        if (n == 1 || n == 2)
        {
            cout << n - 1;
        }
        else
        {
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] > n)
                {
                    cout << (v[i - 1] - 1);
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}