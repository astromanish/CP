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
    int n,m;
    cin>>n>>m;
    int a[n];
    ff(i,0,n)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int sum=0;
    ff(i,0,m)
    {
        if(a[i]<0)
            sum+=a[i];
        else
            break;
    }
    cout<<-sum<<endl;
    return 0;
}