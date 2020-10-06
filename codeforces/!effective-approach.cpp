#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    int n, b;
    cin >> n;
    int arr[100001];
    for (int i = 1; i < n; i++)
    {
        cin >> b;
        arr[b] = i;
    }
    int m;
    cin >> m;
    int a;
    ll count1 = 0, count2 = 0;
    while (m--)
    {
        cin >> a;
        count1 += arr[a];
        count2 += n - arr[a] + 1;
    }
    cout << count1 << " " << count2;
    return 0;
}