#include <iostream>
#include <cstdlib>

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
    int dif[n]={};
    for(int j=0;j<(n-1);j++)
    {
        dif[j]+=abs(ar[j]-ar[j+1]);
    }
    dif[n-1]=abs(ar[0]-ar[n-1]);
    int min = dif[0];
    int minin=0;
    for(int k=0;k<n;k++)
    {
        if(dif[k]<min)
        {
            min=dif[k];
            minin=k;
        }
    }
    if(minin!=n-1)
    cout<<minin+1<<" "<<minin+2;
    else
    {
        cout<<n<<" "<<1;
    }
    
    return 0;
}