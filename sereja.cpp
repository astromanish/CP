#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a[1000], b[1000], c[1001] = {0};
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        c[b[i]]++;
    }
    for (int j = 0; j < n; j++)
    {
        c[b[j]]--;
        if (c[a[j]] == 0)
            count++;
        c[b[j]]++;
    }
    cout << count;
    return 0;
}