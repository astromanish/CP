#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        int len = s.length();
        string s1;
        for (int i = 0; i < len; i++)
        {
            if (i % 2 == 0)
                s1 += s[i];
            if (i == len - 1)
                s1 += s[i];
        }
        cout << s1 << "\n";
    }
    return 0;
}