#include <bits/stdc++.h>

using namespace std;

#define int long long
#define vi vector<int> 
#define vl vector<long long> 

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)

bool fun(const pair<int,int> &a, const pair<int,int> &b)
{
    if(a.second!=b.second)
    {
        if(a.second>b.second)
            return true;
        else
            return false;
    }
    else
    {
        if(a.first<b.first)
            return true;
        else 
            return false;
    }
}

signed main()
{
    int n,m;
    cin>>n>>m;
    int a[m+1][n+1];
    ff(i,1,m+1)
    {
        ff(j,1,n+1)
        {
            cin>>a[i][j];
        }
    }
    unordered_map<int,int> win;
    ff(i,1,m+1)
    {
        int max_i=n;
        for(int j=n;j>=1;j--)
        {
            if(a[i][j]>=a[i][max_i])
                max_i=j;
        }
        win[max_i]++;
    }
    vector<pair<int,int>> v;
    for(auto val:win)
    {
        v.push_back({val.first,val.second});
    }
    sort(all(v),fun);
    cout<<v[0].first;
    return 0;
}