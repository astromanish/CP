#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)
#define fb(a, b, c) for (int a = b; a > c; a--)

#define MOD 1e9 + 7

vi arr[100];

int main()
{
    int n;
    cin >> n;
    int a;
    int cur = 0;
    int cnt = 0;
    ff(i, 0, n)
    {
        cin >> a;
        if (a < 0)
        {
            if (cnt == 0 || cnt == 1)
            {
                arr[cur].push_back(a);
                cnt++;
            }
            else
            {
                cnt = 1;
                cur++;
                arr[cur].push_back(a);
            }
        }
        else
        {
            arr[cur].push_back(a);
        }
    }
    cout << cur + 1 << endl;
    ff(i, 0, cur + 1)
    {
        cout << arr[i].size() << " ";
    }

    return 0;
}