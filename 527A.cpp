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
    while (a!=0 && b!=0)
    {
        if(a>b)
        {
            cnt+=a/b;
            a=a%b;
        }
        else
        {
            cnt+=b/a;
            b=b%a;
        }
    }
    cout<<cnt;
    return 0;
}