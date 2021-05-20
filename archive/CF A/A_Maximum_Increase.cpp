
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
    int arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> v;
    int cnt = 1;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
            cnt++;
        else
        {
            v.push_back(cnt);
            cnt = 1;
        }
    }
    v.push_back(cnt);
    cout << *max_element(all(v)) << endl;
    return 0;
}