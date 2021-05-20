#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[100];
    cin >> s;
    if (n < 26)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
    }
    sort(s, s + n);
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
            cnt++;
    }
    if (cnt == 25)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}