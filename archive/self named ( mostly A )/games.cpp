#include <bits/stdc++.h>

using namespace std;

int fun(int a, int b)
{
    if (a % b == 0)
        return 0;
    else
        return b - a % b;
}

int main()
{
    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    int cnt = 0;
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < n; l++)
        {
            if (arr[k][0] == arr[l][1])
                cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}