#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    int a, b;
    while (t--)
    {
        cin >> a >> b;
        cin >> s;
        int len = s.length();
        int U = 0, D = 0, R = 0, L = 0;
        bool exist = false;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == 'U')
                U++;
            if (s[i] == 'D')
                D++;
            if (s[i] == 'R')
                R++;
            if (s[i] == 'L')
                L++;
        }
        if (a > 0)
        {
            if (b > 0)
            {
                if (R >= a && U >= b)
                    exist = true;
            }
            else
            {
                if (R >= a && D >= abs(b))
                    exist = true;
            }
        }
        else
        {
            if (b > 0)
            {
                if (L >= abs(a) && U >= b)
                    exist = true;
            }
            else
            {
                if (L >= abs(a) && D >= abs(a))
                    exist = true;
            }
        }
        if (exist)
            cout << "YES \n";
        else
            cout << "NO \n";
    }
    return 0;
}