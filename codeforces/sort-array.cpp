#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i;
    int arr[n], sorted[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sorted[i] = arr[i];
    }
    sort(sorted, sorted + n);
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == sorted[i])
            count++;
    }
    if (count == n)
    {
        cout << "yes\n1 1";
        return 0;
    }
    int l, r;
    int seg = -1;
    for (i = 0; i < n - 1 && seg < 0;)
    {
        if (arr[i] < arr[i + 1])
        {
            i++;
        }
        else
        {
            l = i;
            r = i;
            while (arr[i] > arr[i + 1] && i < n - 1)
            {
                i++;
                r++;
            }
            sort(arr + l, arr + r + 1);
            seg++;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (sorted[i] != arr[i])
        {
            cout << "no";
            return 0;
        }
    }
    cout << "yes\n"
         << l + 1 << " " << r + 1;
    return 0;
}