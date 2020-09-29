#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    char *s= new char[100];
    cin>>s;
    int l=strlen(s),max_count=0,cur_count;
    for(int i=0;i<l;)
    {
        cur_count=1;
        for(int j=i+1;j<l;j++)
        {
            if(s[i]!=s[j])
            break;
            cur_count++;
            i++;
        }
        if(cur_count>max_count)
        max_count=cur_count;
        i++;
    }
    if(max_count>=7)
    cout<<"YES";
    else
    {
        cout<<"NO";
    }
    

    return 0;
}