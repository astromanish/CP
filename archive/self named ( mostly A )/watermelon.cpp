#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

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
    sort(arr, arr + n);
    cout << arr[n - 1] - arr[0] << " ";
    int count = 0;
    for (i = 0; i < n - 1; i++)
    {
        while (arr[i] == arr[i + 1] && i < n - 1)
        {
            i++;
        }
        count++;
    }
    cout << count * (count - 1) / 2;
    return 0;
}