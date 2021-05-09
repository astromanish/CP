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
    int arr[n];
    int a[1001] = {0};
    int i;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    vi v;
    for (i = n - 1; i >= 0; i--)
    {
        if (!a[arr[i]])
        {
            v.push_back(arr[i]);
            a[arr[i]] = true;
        }
    }
    cout << v.size() << endl;
    for (auto rit = v.rbegin(); rit != v.rend(); rit++)
        cout << *rit << " ";
    cout << endl;
    return 0;
}