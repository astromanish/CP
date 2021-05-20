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
    char arr[8][8];
    ff(i, 0, 8)
    {
        ff(j, 0, 8)
        {
            cin >> arr[i][j];
        }
    }
    ff(i, 0, 8)
    {
        for (int j = 0; j < 7; j++)
        {
            if (arr[i][j] == arr[i][j + 1])
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}