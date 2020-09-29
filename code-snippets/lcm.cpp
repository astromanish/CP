#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    return (a == 0) ? b : gcd(b % a, a);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    cout << lcm(15, 20);
    return 0;
}