#include <bits/stdc++.h>

using namespace std;

#define int long long
#define vi vector<int> 
#define vl vector<long long> 

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)


signed main()
{
    int a,b;
    cin>>a>>b;
    int cnt=0;
    while(a>=1 && b>=1)
    {
        if(a==1 && b==1)
        {
            cout<<cnt;
            return 0;
        }
        if(a<=b)
        {
            a++;
            b-=2;
        }
        else
        {
            b++;
            a-=2;
        }
        
        cnt++;
    }
    cout<<cnt;
    return 0;
}