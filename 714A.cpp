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
    int a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;
    int l = max(a,c);
    int r = min(b,d);
    if(l<=r)
    {
        if(k>=l && k<=r)
            cout<<r-l;
        else
            cout<<r-l+1;

    }
    else
        cout<<0;
    return 0;
}