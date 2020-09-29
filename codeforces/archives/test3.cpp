#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int ar[3];
    int count=0,coun;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>ar[j];
        }
        coun=0;
        for(int k=0;k<3;k++)
        {
            if(ar[k]==1)
            coun++;
        }
        if(coun>=2)
        count++;
        ar[0]=0;
        ar[1]=0;
        ar[2]=0;
    }
    cout<<count;
    return 0;
}