#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n)
{

    int min_ind;
    for (int i = 0; i < n; i++)
    {
        min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
                min_ind = j;
            swap(&arr[min_ind], &arr[i]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}