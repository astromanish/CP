#include <iostream>

using namespace std;

int main(void)
{
    int ar[4],count=0,coun;
    for(int i=0;i<4;i++)
    {
        cin>>ar[i];
        coun=0;
        for(int j=0;j<i;j++)
        {
            if(ar[i]==ar[j])
            coun++;
        }
        if(coun==0)
        count++;
    }
    cout<<4-count;
    return 0;
}