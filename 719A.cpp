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
    int n;
    cin>>n;
    int val;
    vector<int> v;
    ff(i,0,n)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    if(v.back()==15)
    {
        cout<<"DOWN";
        return 0;
    }
    if(v.back()==0)
    {
        cout<<"UP";
        return 0;
    }
    if(n!=1)
    {
        if(v[n-1]>v[n-2])
            cout<<"UP";
        else
            cout<<"DOWN";

    }
    else
    {
        cout<<-1;
    }


    return 0;
}