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
    int n, i, j;
    cin >> n;
    int A[n], B[n];
    for (i = 0; i < n; i++)
        cin >> A[i];
    for (i = 0; i < n; i++)
        cin >> B[i];
    vector<int> v;
    int cnt = 0;
    for (i = 1; i <= 1000; i++)
    {
        int c = 0;
        for (j = 0; j < n; j++)
        {
            if (i <= B[j] && i >= A[j])
                c++;
        }
        if (c == n)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}