#include <iostream>

using namespace std;

bool check(int n);

int main(void)
{
    int n,m;
    cin>>n>>m;
    for(int i=2;i<10;i++)
    {
        if(check(n+i))
        {
            if((n+i)==m)
            {
                cout<<"YES";
                return 0;
            }
            else
            {
                cout<<"NO";
                return 0;
            }    
        }
    }
}

bool check(int n)
{
    if(n==1)
    return false;
    if(n==2)
    return true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}