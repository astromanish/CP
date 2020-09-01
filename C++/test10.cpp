#include <iostream>

using namespace std;

int main(void)
{
    long long n,k;
    cin>>n>>k;
    if(k<=(1+n)/2)
    cout<<2*k-1;
    else
    {
        cout<<2*(      k-(  (n+1)/2  )      );
    }
    
    return 0;
}