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
        int n;
        cin>>n;
        int sum=0;
        int val;
        ff(i,0,n)
        {
            cin>>val;
            sum+=val;
        }
        if(sum==n)
            cout<<0<<endl;
        else
        {
            if(sum>n)
            {
                cout<<sum-n<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
        
    }
    return 0;
}