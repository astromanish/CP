#include <stdio.h>
#include <string.h>

bool checkpalindrome(char *s)
{
    int i, c = 0, n;
    n = strlen(s);
    for (i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - i - 1])
            c++;
    }
    if (c == i)
        return true;
    else
        return false;
}
int main()
{
    char s[1000];

    printf("Enter the string: ");
    gets(s);

    if (checkpalindrome(s))
        printf("given string is palindrome");
    else
        printf("given string is not palindrome");
    return 0;
}