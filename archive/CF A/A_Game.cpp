
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
    int n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;
    bool turn = true;
    int l1 = n1, l2 = n2;
    while (1)
    {
        if (turn)
        {
            if (l1 > 0)
                l1 -= 1;
            else
            {
                cout << "Second" << endl;
                break;
            }
        }
        else
        {
            if (l2 > 0)
                l2 -= 1;
            else
            {
                cout << "First" << endl;
                break;
            }
        }
        turn = !turn;
    }
    return 0;
}