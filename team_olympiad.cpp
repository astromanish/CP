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
    int i, j;
    vector<int> one;
    vector<int> two;
    vector<int> thr;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            one.push_back(i + 1);
        if (arr[i] == 2)
            two.push_back(i + 1);
        if (arr[i] == 3)
            thr.push_back(i + 1);
    }
    int cnt = 0;
    int a[3];
    a[0] = one.size(), a[1] = two.size(), a[2] = thr.size();
    sort(a, a + 3);
    cout << a[0] << endl;
    if (a[0])
    {
        for (i = 0; i < a[0]; i++)
        {
            cout << one[i] << " ";
            cout << two[i] << " ";
            cout << thr[i] << endl;
        }
    }

    return 0;
}