#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int max=ar[0],min=ar[0],maxp=0,minp=0;
    for(int j=1;j<n;j++)
    {
        if(ar[j]<=min)
        {
            min=ar[j];
            minp=j;
        }
        if(ar[j]>max)
        {
            max=ar[j];
            maxp=j;
        }
    }
    if(ar[0]==max && ar[n-1]==min)
    cout<<"0";
    else if(maxp>minp)
        {
            cout<<maxp+n-2-minp; 
        }
        else
        {
            cout<<maxp+n-1-minp;    
        }
        
    
    return 0;
}