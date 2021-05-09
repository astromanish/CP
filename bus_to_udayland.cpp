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
    char arr[n][5];
    bool empty = false;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
        if ((empty == false && arr[i][0] == 'O' && arr[i][1] == 'O') || (empty == false && arr[i][3] == 'O' && arr[i][4] == 'O'))
        {
            if (empty == false && arr[i][0] == 'O' && arr[i][1] == 'O')
            {
                empty = true;
                arr[i][0] = '+';
                arr[i][1] = '+';
            }
            if (empty == false && arr[i][3] == 'O' && arr[i][4] == 'O')
            {
                empty = true;
                arr[i][3] = '+';
                arr[i][4] = '+';
            }
        }
    }
    if (empty)
    {
        cout << "YES" << endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < 5; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    else
        cout << "NO" << endl;
}