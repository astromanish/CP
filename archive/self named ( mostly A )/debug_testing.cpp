
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a <= c; a++)
#define fb(a, b, c) for (int a = b; a >= c; a--)

#define MOD 1e9 + 7

int main()
{
    int n;
    cout << "ENTER n" << endl;
    cin >> n;
    int arr[n];
    ff(i, 0, n - 1)
            cin >>
        arr[i];
    ff(i, 0, n - 1)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}