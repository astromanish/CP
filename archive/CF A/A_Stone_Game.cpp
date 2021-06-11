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
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin>>n;
        int ar[n];
        int a;
        cin>>a;
        int maxi = 0,mini=0;
        int mx = a,mn=a;
        ff(i,1,n)
        {
            cin>>ar[i];
            if(ar[i]>mx)
            {
                mx=ar[i];
                maxi=i;
            }
            if(ar[i]<mn)
            {
                mn=ar[i];
                mini=i;
            }
        }
        maxi+=1;
        mini+=1;
        if(max(maxi,mini)<=n/2)
        {
            cout<<max(maxi,mini)<<endl;
        }
        else
        {

        }
        
    }
    return 0;
}