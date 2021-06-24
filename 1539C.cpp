#include <bits/stdc++.h>

using namespace std;

#define int long long

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)


signed main()
{
    int arr[] = {9, 12, 2, 11, 2, 2, 10, 9, 12, 10, 9, 11, 2};
    int x = arr[0];
    for (int i = 1; i < 13; i++)
        x = x ^ arr[i];
    cout<<x;
}