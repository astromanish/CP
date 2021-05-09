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
    int a, n, sum;
    cin >> a;
    while (1)
    {
        n = a;
        sum = 0;
        while (n != 0)
        {
            sum += n % 10;
            n = n / 10;
        }
        if (sum % 4 == 0)
        {
            cout << a << endl;
            return 0;
        }
        a++;
    }
    return 0;
}