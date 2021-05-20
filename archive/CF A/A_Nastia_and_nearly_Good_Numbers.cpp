#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, x, y, z;
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            if (b == 2)
            {
                cout << a << " " << a * b << " " << a + a * b << endl;
            }
            else
            {
                cout << a << " " << a * b - a << " " << a * b << endl;
            }
        }
    }
    return 0;
}