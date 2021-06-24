#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)


int main()
{
    int n;
    cin>>n;
    int a[4][4];
    ff(i,0,4)
    {
        ff(j,0,4)
        {
            cin>>a[i][j];
        }
    }
    ff(i,0,4)
    {
        if(a[i][0]+a[i][2]<=n)
        {
            cout<<i+1<<" "<<a[i][0]<<" "<<n-a[i][0];
            return 0;
        }
        if(a[i][0]+a[i][3]<=n)
        {
            cout<<i+1<<" "<<a[i][0]<<" "<<n-a[i][0];
            return 0;
        }
        if(a[i][1]+a[i][2]<=n)
        {
            cout<<i+1<<" "<<a[i][1]<<" "<<n-a[i][1];
            return 0;
        }
        if(a[i][1]+a[i][3]<=n)
        {
            cout<<i+1<<" "<<a[i][1]<<" "<<n-a[i][1];
            return 0;
        }
    }
    cout<<-1;
    return 0;
}