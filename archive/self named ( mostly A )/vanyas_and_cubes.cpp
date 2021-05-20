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
    int h = 0;
    int cnt = 0;
    while (cnt <= n)
    {
        h++;
        cnt += h * (h + 1) / 2;
    }
    cout << h - 1 << endl;
    return 0;
}