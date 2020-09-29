#include <iostream>

using namespace std;

int min(int a,int b, int c)
{
    if(a<b && a<c)
    return a;
    else
    {
        if(b<c)
        return b;
        else
        {
            return c;
        }
        
    }
    
}

int main(void)
{
    int ar[8];
    for(int i=0;i<8;i++)
    {
        cin>>ar[i];
    }
    cout<<min(ar[1]*ar[2]/ar[6],ar[3]*ar[4],ar[5]/ar[7])/ar[0];
    return 0;
}