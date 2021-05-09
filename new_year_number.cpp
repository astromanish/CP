#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int cnt1 = n % 2020;
        int cnt2 = (n - cnt1) / 2020 - cnt1;
        if (cnt2 >= 0 && cnt2 * 2020 + cnt1 * 2021 == n)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}