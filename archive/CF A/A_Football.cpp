#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)
#define fb(a, b, c) for (int a = b; a > c; a--)

#define MOD 1e9 + 7

int main()
{
    string s;
    cin>>s;
    int l = s.length();
    int last=s[0];
    int cnt=0;
    vi c;
    ff(i,0,l)
    {
        if(s[i]==last)
        {
            cnt++;     
        }  
        else
        {
            c.push_back(cnt);
            cnt=1;
        }  
        last=s[i]; 
    }
    c.push_back(cnt);
    if(*max_element(all(c))>=7)
        {
            cout<<"YES";
        }
    else
    {
        cout<<"NO";
    }
    return 0;
}