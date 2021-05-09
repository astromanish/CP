
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a <= c; a++)
#define fb(a, b, c) for (int a = b; a >= c; a--)

#define MOD 1e9 + 7

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int min_i, max_i;
    ff(i, 0, n - 1)
    {
        cin >>
            arr[i];
        if (arr[i] == 1)
            min_i = i + 1;
        if (arr[i] == n)
            max_i = i + 1;
    }
    if (min_i < max_i)
    {
        cout << abs(min_i - max_i) + max(min_i - 1, n - max_i);
    }
    else
    {
        cout << abs(min_i - max_i) + max(max_i - 1, n - min_i);
    }
    return 0;
}