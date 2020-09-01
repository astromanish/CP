#include <iostream>
#include <string>
 
using namespace std;
 
int main(void)
{
    int x=0;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s[0]=="+")
        x+=1;
        if(s[0]=="-"])
        x-=1;
        if(s[1]=="+")
        x+=1;
        if(s[1]=="-")
        x-=1;
    }
    cout<<x;
    return 0;
}