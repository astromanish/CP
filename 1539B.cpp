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
    int n,q;
    cin >> n>>q;
    string s;
    cin>>s;
    int a[n+1];
    a[0]=0;
    ff(i,1,n+1)
    {
        a[i]=a[i-1]+(s[i-1]-'a'+1);   
    }
    cout<<endl;
    while (q--)
    {
        int ans=0;
        int l,r;
        cin>>l>>r;  
        cout<<a[r]-a[l-1]<<endl;
    }
    return 0;
}