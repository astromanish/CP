#include <bits/stdc++.h>

using namespace std;

int fun(int a, int b)
{
    if (a % b == 0)
        return 0;
    else
        return b - a % b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        cout << fun(a, b) << "\n";
    }
    return 0;
}