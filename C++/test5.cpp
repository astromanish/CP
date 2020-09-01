#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        int m=s[i];
        if(m==65 || m==69 || m==85 || m==73 || m==79 || m==97 || m==101 || m==105 || m==111 || m==117 || m==121 || m==89)
        {
            continue;
        }
        else
        {
            if(m>97 && m<=122)
            cout<<"."<<char(m);
            else
            {
                cout<<"."<<char(m+32);
            }
            
        }
        
    }
    return 0;
}