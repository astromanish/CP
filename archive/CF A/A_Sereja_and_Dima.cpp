
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
    int i;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s = 0, d = 0;
    int f = 0, b = n - 1;
    int turn = 1;
    while (f <= b)
    {
        if (turn % 2 == 0)
        {
            if (arr[f] >= arr[b])
            {
                d += arr[f];
                f++;
            }
            else
            {
                d += arr[b];
                b--;
            }
        }
        else
        {
            if (arr[f] >= arr[b])
            {
                s += arr[f];
                f++;
            }
            else
            {
                s += arr[b];
                b--;
            }
        }
        turn++;
    }
    cout << s << " " << d << endl;
    return 0;
}