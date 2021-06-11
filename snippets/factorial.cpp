#include <bits/stdc++.h>

using namespace std;

unsigned int fact(unsigned int n)
{
    return (n == 1 || n == 0) ? 1 : n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}