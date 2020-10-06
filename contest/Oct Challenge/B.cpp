#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    int N, K, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> N >> K >> X >> Y;
        int current = X;
        while (true)
        {
            current = (current + K) % N;
            if (current == Y)
            {
                cout << "YES\n";
                break;
            }
            if (current == X)
            {
                cout << "NO\n";
                break;
            }
        }
    }
    return 0;
}