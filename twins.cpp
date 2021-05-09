#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());

    int j, k;
    for (i = 1; i < n + 1; i++)
    {
        int sum1 = 0, sum2 = 0;
        for (j = 0; j < i; j++)
        {
            sum1 += arr[j];
        }
        for (k = i; k < n; k++)
        {
            sum2 += arr[k];
        }
        if (sum1 > sum2)
        {
            cout << i << "\n";
            return 0;
        }
    }
}