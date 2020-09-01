#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    long double m,n,a;
    cin>>m>>n>>a;
    long long int x=ceil(m/a)*ceil(n/a);
    cout<<x;
    return 0;
}