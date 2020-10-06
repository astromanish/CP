#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);
    int n;
    while (T--)
    {
        scanf("%d", &n);
        int arr[n];
        int i;
        for (i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        bool exist = false;
        do
        {
            int count = 0;
            for (i = 0; i < n - 1; i++)
            {
                if ((arr[i] & arr[i + 1]) > 0)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (count == n - 1)
            {
                for (i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                exist = true;
                break;
            }
        } while (next_permutation(arr, arr + n));
        if (!exist)
        {
            printf("-1\n");
        }
    }
    return 0;
}