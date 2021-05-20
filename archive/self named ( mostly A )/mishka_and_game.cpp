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
    int n, i;
    cin >> n;
    int a, b;
    int cnt1 = 0, cnt2 = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a > b)
            cnt1++;
        else
        {
            if (b > a)
                cnt2++;
        }
    }
    if (cnt1 == cnt2)
        cout << "Friendship is magic!^^" << endl;
    else
    {
        if (cnt1 > cnt2)
            cout << "Mishka" << endl;
        else
            cout << "Chris" << endl;
    }
    return 0;
}