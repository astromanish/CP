#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        while (i < n - 1 && s[i] == s[i + 1])
        {
            count++;
            i++;
        }
    }
    cout << count;
    return 0;
}