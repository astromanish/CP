#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main(void)
{
    int size=100;
    char *s1= (char *)malloc(size*sizeof(char));
    char *s2= (char *)malloc(size*sizeof(char));
    cin>>s1>>s2;
    int l= strlen(s1);
    int res1,res2;
    for(int i=0;i<l;i++)
    {
        res1=s1[i];
        res2=s2[i];
        if(res1>64 && res1<91)
        s1[i]+=32;
        if(res2>64 && res2<91)
        s2[i]+=32;
    }
    if(strcmp(s1,s2)<0)
    cout<<-1;
    if(strcmp(s1,s2)>0)
    cout<<1;
    if(strcmp(s1,s2)==0)
    cout<<0;
    
    return 0;
}