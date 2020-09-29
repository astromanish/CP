#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    int t=0,leftCount=0,rightCount=0;
    for(int k=0;k<2;k++)
    {
        for(int l=0;l<n;l++)
        {
            if(k==0)
            {
                if(arr[l][k]==1)
                {
                    leftCount++;
                }
            }
            else
            {
                if(arr[l][k]==1)
                {
                    rightCount++;
                }
            }
            
        }
    }
    if(leftCount>(n-leftCount))
    {
        t+=(n-leftCount);
    }
    else
    {
        t+=leftCount;
    }
    if(rightCount>(n-rightCount))
    {
        t+=(n-rightCount);
    }
    else
    {
        t+=rightCount;
    }
    cout<<t;
    return 0;
}