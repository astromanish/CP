#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, q, a, b;
    cin >> n;
    int arr[n + 1] = {0};
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> a;
        arr[a]++;
    }
    cin >> q;
    for (int j = 0; j < q; j++)
    {
        cin >> b;
        arr[b]++;
    }
    bool exist = true;
    for (int k = 1; k < n + 1; k++)
    {
        if (arr[k] == 0)
        {
            exist = false;
            break;
        }
    }
    if (exist)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}