#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int n,m1,m2=0,i,min_t=0,total=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]==a[n-1])
    {
        if(n%2==0)
            m2=(n/2*(n-1));
        else
            m2=(n/2*n);
    }
    else
    {
        for(i=0; i<n; i++)
        {

            if(a[i]==a[0])
                min_t++;
            if(a[i]==a[n-1])
                total++;
        }
        m2=min_t*total;

    }
    m1=a[n-1]-a[0];
    cout<<m1<<" "<<m2;
    return 0;
}