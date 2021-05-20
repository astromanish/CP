#include <stdio.h>

int main()
{
    int n, m, pos = 0, a;
    scanf("%d,%d", n, m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", a);
        if (a == 1)
            pos++;
    }
    while (m--)
    {
        int l, r;
        scanf("%d,%d", l, r);
        int d = r - l + 1;
        if (d % 2 == 0 && pos >= d / 2 && n - pos >= d / 2)
            printf("%d\n", 1);
        else
            printf("%d\n", 0);
    }
    return 0;
}
