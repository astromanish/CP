#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int> 
#define vl vector<long long> 

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n,m,i,j;
        cin>>n>>m>>i>>j;
        int x1,y1;
        if(i>n/2)
            x1=1;
        else
            x1=n;
        if(j>m/2)
            y1=1;
        else
            y1=m;
        cout<<x1<<" "<<y1<<" "; 
        cout<<(x1==1?n:1)<<" "<<(y1==1?m:1)<<endl;;
    }
    return 0;
}