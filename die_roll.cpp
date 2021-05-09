#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define MOD 1e9 + 7

void fun(int a)
{
    switch (a)
    {
    case 0:
        cout << "0/1";
        break;
    case 1:
        cout << "1/6";
        break;
    case 2:
        cout << "1/3";
        break;
    case 3:
        cout << "1/2";
        break;
    case 4:
        cout << "2/3";
        break;
    case 5:
        cout << "5/6";
        break;
    case 6:
        cout << "1/1";
        break;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    if (a >= b)
        fun(6 - a + 1);
    else
        fun(6 - b + 1);
    return 0;
}