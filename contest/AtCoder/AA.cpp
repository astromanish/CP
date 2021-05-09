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
    int a, b, c;
    cin >> a >> b >> c;
    if (a * a + b * b < c * c)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}