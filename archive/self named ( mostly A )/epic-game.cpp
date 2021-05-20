#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    return (a == 0) ? b : gcd(b % a, a);
}

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int curr = a;
    int heap = n;
    while (n < gcd(curr, heap))
    {
        heap -= gcd(curr, heap);
        curr = (curr == a) ? b : a;
    }
    cout << (curr = a) ? 0 : 1;
    return 0;
}