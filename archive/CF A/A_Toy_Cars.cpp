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
    int arr[n][n];
    ff(i, 0, n)
    {
        ff(j, 0, n)
        {
            cin >> arr[i][j];
        }
    }
    int cnt = 0;
    int a[n + 1] = {0};
    ff(i, 0, n)
    {
        ff(j, 0, i)
        {
            if (arr[i][j] == 3)
            {
                if (!a[i + 1])
                {
                    a[i + 1] = true;
                    cnt++;
                }
                if (!a[j + 1])
                {
                    a[j + 1] = true;
                    cnt++;
                }
            }
            else
            {
                if (arr[i][j] == 1)
                {
                    if (!a[i + 1])
                    {
                        a[i + 1] = true;
                        cnt++;
                    }
                }
                else
                {
                    if (arr[i][j] == 2)
                    {
                        if (!a[j + 1])
                        {
                            a[j + 1] = true;
                            cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << n - cnt << endl;
    ff(i, 1, n + 1)
    {
        if (!a[i])
            cout << i << " ";
    }
    cout << endl;
    return 0;
}