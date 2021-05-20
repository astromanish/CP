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
    int hour = 0;
    int l_candel = a;
    int waste = 0;
    int temp;
    while (l_candel != 0)
    {
        hour += l_candel;
        temp = (l_candel + waste) % b;
        l_candel = (l_candel + waste) / b;
        waste = temp;
    }
    cout << hour;
    return 0;
}