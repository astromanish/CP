#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        switch (s[0])
        {
        case 'T':
            count += 4;
            break;
        case 'C':
            count += 6;
            break;
        case 'O':
            count += 8;
            break;
        case 'D':
            count += 12;
            break;
        case 'I':
            count += 20;
        }
    }
    cout << count << "\n";
    return 0;
}