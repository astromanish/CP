
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
    int i;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    int max = *max_element(arr, arr + n), ind;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == max)
            ind = i;
    }
    max = -1;
    for (i = 0; i < n; i++)
    {
        if (i != ind)
        {
            if (arr[i] >= max)
                max = arr[i];
        }
    }
    cout << ind + 1 << " " << max << endl;
    return 0;
}