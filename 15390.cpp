#include <bits/stdc++.h>

using namespace std;

// #define int long long
// #define vi vector<int> 
// #define vl vector<long long> 

// #define all(v) v.begin(), v.end()
// #define endl "\n"

// #define ff(a, b, c) for (int a = b; a < c; a++)


int main()
{
    long long k;
    cin >> k;
    long long n,x,t;
    while (k--)
    {
        cin>>n>>x>>t;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        long long ans=0;
        long long num = t/x;
        if(num<n)
        {
            ans+=(n-num)*num;
            ans+=((num)*(num-1))/2;
            cout<<ans<<endl; 
        }
        else
        {
            cout<<(n)*(n-1)/2<<endl;
        }
          
    }
    return 0;
}