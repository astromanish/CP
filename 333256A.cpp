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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int cnt=0;
        int l;
        cin>>l;
        int val;
        ff(i,1,n)
        {
            cin>>val;
            if(val<l)
                cnt++;
            l=val;
        }
        if(cnt%2==0)
            cout<<cnt/2;
        else
            cout<<cnt/2+1;    
    }
    return 0;
}