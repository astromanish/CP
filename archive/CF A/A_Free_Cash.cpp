#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)
#define fb(a, b, c) for (int a = b; a > c; a--)

#define MOD 1e9 + 7

int main()
{
    int n;
    cin >> n;
    int a, b;
    int arr[24][60] = {0};
    ff(i, 0, n)
    {
        cin >> a >> b;
        arr[a][b]++;
    }
    int max = 0;
    ff(i, 0, 24)
    {
        ff(j, 0, 60)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    cout << max << endl;

    return 0;
}