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
    int N, M, X, Y;
    int i, j;
    while (t--)
    {
        cin >> N >> M;
        cin >> X >> Y;
        char arr[N][M];
        int res[N][2];
        int a, b;
        for (i = 0; i < N; i++)
        {
            a = 0;
            b = 0;
            for (j = 0; j < M; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'F')
                    a++;
                if (arr[i][j] == 'P')
                    b++;
            }
            res[i][0] = a;
            res[i][1] = b;
        }
        for (i = 0; i < N; i++)
        {
            if (res[i][0] >= X || (res[i][0] == X - 1 && res[i][1] >= Y))
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }

    return 0;
}