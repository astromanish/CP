#include <iostream>

using namespace std;

int main(void)
{
    int n,x=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char *s=new char[3];
        cin>>s;
        if( s[0]=='+' || s[0]=='-')
        {
            if(s[0]=='+')
            x+=1;
            if(s[0]=='-')
            x-=1;
        }
        else
        {
            if(s[1]=='+')
            x+=1;
            if(s[1]=='-')
            x-=1;
        }
        delete s;
    }
    cout<<x;
    return 0;
}