#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    int cnt=0;
    char lst='2';
    while(n--)
    {
        cin>>s;
        if(lst!=s[0])
        {
           lst=s[1];
           continue;   
        }
        else
        {
            cnt++;
        }   
        lst=s[1];
    }
    cout<<cnt+1;
    return 0;
}