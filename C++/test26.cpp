#include <iostream>

using namespace std;

int main(void)
{
    int n,m;
    cin>>n>>m;
    char ar[n][m];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>ar[i][j];
            if(ar[i][j]=='.')
            ar[i][j]=='B';
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ar[i][j]=='B')
            {
                if(i!=0)
                {
                    if(ar[i-1][j]=='B')
                    ar[i][j]=='W';
                }
                if(i!=n-1)
                {
                    if(ar[i+1][j]=='B')
                    ar[i][j]=='W';
                }
                if(j!=0)
                {
                    if(ar[i][j-1]=='B')
                    ar[i][j]=='W';
                }
                if(j!=n-1)
                {
                    if(ar[i][j+1]=='B')
                    ar[i][j]=='W';
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}