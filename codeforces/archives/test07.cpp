#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int ar[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>ar[i][j];
        }
    }
    int arr[n]={};
    int max=0;
    int x=0;
    for(int k=0;k<n;k++)
    {
        x-=ar[k][0];
        x+=ar[k][1];
        arr[k]=x;
        if (arr[k]>max)
        max=arr[k];
    }
    cout<<max;
    return 0;
}