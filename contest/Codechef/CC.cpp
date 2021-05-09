#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define MOD 1e9 + 7

int main()
{
    int t;
    cin >> t;
    int N, M;
    int x, y;
    int a, b;
    while (t--)
    {
        cin >> N >> M;
        cin >> x >> y;
        cin >> a >> b;
        bool c = false;
        int turn = 0;
        if (turn % 2 = 0)
        {
            if (y == M)
                x += 1;
            else
            {
                if (x == N)
                    y += 1;
            }

            turn++;
        }
        else
        {
        }
        if (c)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}