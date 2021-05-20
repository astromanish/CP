
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
    int A, B;
    cin >> A >> B;
    int ans = 1;
    for (int i = 1; i <= min(A, B); i++)
        ans *= i;
    cout << ans << endl;
    return 0;
}