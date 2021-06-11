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
        int a;
        int cnt=0;
        vector<int> v;
        ff(i,0,n)
        {
            cin>>a;
            if(a%2==0)
                cnt++;
            else
            {
                if(a!=1)
                {
                    v.push_back(a);
                }
            }
        }
        int sum = n*cnt - cnt*(cnt+1)/2;
        int l = v.size();
        for(int i=0;i<l;i++)
        {
            for(int j=i+1;j<l;j++)
            {
                if(__gcd(v[i],2*v[j])>1)
                    sum++;
            }    
        }
        cout<<sum<<endl;

    }
    return 0;
}