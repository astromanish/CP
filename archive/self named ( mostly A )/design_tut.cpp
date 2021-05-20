#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if ((k + 2.5 * ((i + 1) * i)) > 240)
        {
            cout << i - 1;
            return 0;
        }
        else
        {
            if ((k + 2.5 * ((i + 1) * i)) == 240)
            {
                cout << i;
                return 0;
            }
        }
    }
    cout << n;
    return 0;
}