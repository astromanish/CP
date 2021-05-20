#include <stdio.h>
#include <string.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubble_sort(int *a, int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
            count++;
        }
    }

    printf("No of comparison performed in Bubble Sort: %d\n", count);
}

void insert_sort(int *a, int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            count++;
            if (a[j - 1] > a[j])
            {
                swap(&a[j - 1], &a[j]);
            }
            else
            {
                break;
            }
        }
    }
    printf("No of comparison performed in Insert Sort: %d\n", count);
}

int main()
{
    int a[] = {32, 15, 20, 30, 12, 25, 16, 18, 42, 10, 18};
    int b[] = {32, 15, 20, 30, 12, 25, 16, 18, 42, 10, 18};
    bubble_sort(a, 11);
    printf("Given array after bubble sorting\n");
    display(a, 11);
    insert_sort(b, 11);
    printf("Given array after insert sorting\n");
    display(b, 11);
    return 0;
}
