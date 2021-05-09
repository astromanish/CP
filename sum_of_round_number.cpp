#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, cnt;
    cin >> t;
    while (t--)
    {
        cnt = 0;
        cin >> n;
        int temp = n;
        int a = 1;
        while (temp != 0)
        {
            if (temp % 10 != 0)
            {
                cnt++;
            }
            temp = temp / 10;
        }
        cout << cnt << "\n";
        while (n != 0)
        {
            if (n % 10 != 0)
            {
                cout << (n % 10) * a << " ";
            }
            a *= 10;
            n = n / 10;
        }
        cout << "\n";
    }
    return 0;
}