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
    string a;
    int i;
    string arr[5];
    cin >> a;
    int cnt = 0;
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if (a[0] == arr[i][0] || a[1] == arr[i][1])
            cnt++;
    }

    if (cnt)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}