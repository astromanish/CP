#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int n;
    cin>>n;
    char *s= new char[n];
    cin>>s;
    int l=strlen(s),t_count=0,cur_count;
    for(int i=0;i<l;)
    {
        cur_count=0;
        for(int j=i+1;j<l;j++)
        {
            if(s[i]!=s[j])
            break;
            cur_count++;
            i++;
        }
        t_count+=cur_count;
        i++;
    }
    cout<<t_count;

    delete s;

    return 0;
}