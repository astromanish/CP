#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[1001];
    gets(s);
    int length = strlen(s);
    sort(s, s + length);
    int count = 0;
    for (int i = 0; i < length - 1; i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            count++;
            if (s[i] == s[i + 1])
                count--;
        }
    }
    cout << count << "\n";

    return 0;
}