#include <iostream>

using namespace std;

int main(void)
{
    int a,b;
    cin>>a>>b;
    int ar[a];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    int count=0;
    for(int j=0;j<a;j++)
    {
        if(ar[j]>=ar[b-1] && ar[j]>0)
        count++;
    }
    cout<<count;
    return 0;
}