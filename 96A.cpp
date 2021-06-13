#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)


int main()
{
    string s1;
    cin>>s1;
    int condition = 1;
    for(int i=1; i<=s1.length(); i++){
        if(s1[i] == s1[i-1]){
            condition++;
            if(condition==7){
                cout<<"YES"<<endl;
                return 0;
            }
        }else{
            condition=1;
        }
        
    }
    cout<<"NO"<<endl;
    return 0;
}