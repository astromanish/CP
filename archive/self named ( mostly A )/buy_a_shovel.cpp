#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    if ((k) % 10 == 0)
    {
        cout << 1 << "\n";
        return 0;
    }
    int i;
    for (i = 1; i < 10; i++)
    {
        if ((k * i) % 10 == r)
        {
            cout << i << "\n";
            return 0;
        }
    }
    for (i = 1; i < 11; i++)
    {
        if ((k * i) % 10 == 0)
        {
            cout << i << "\n";
            return 0;
        }
    }

    return 0;
}