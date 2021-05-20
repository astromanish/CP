#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    bool end = true;
    bool start = false;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "#";
            }
            cout << "\n";
        }
        else
        {
            for (int k = 0; k < m; k++)
            {
                if (start)
                {
                    if (k == 0)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                else
                {
                    if (k == m - 1)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
            }
            cout << "\n";
            start = !start;
            end = !end;
        }
    }
    return 0;
}