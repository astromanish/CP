#include <bits/stdc++.h>

using namespace std;

int countDistinct(int arr[], int n)
{
    sort(arr, arr + n);
    int res = 0;
    for (int i = 0; i < n; i++)
    {

        while (i < n - 1 && arr[i] == arr[i + 1])
            i++;

        res++;
    }
    return res;
}

int main()
{
    int ar[] = {1, 2, 3, 3, 4, 1};
    cout << countDistinct(ar, 6);
    return 0;
}