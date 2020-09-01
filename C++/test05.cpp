#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<4*(sqrt(a*b/c)+sqrt(a*c/b)+sqrt(b*c/a));
    return 0;
}