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
    int a,b,c,d;
    while (t--)
    {
        cin>>a>>b>>c>>d;
        if(a>b)
        {
            if(c>d)
            {
                if(a<d || c<b)
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;

            }
            else
            {
                if(a<c || d<b)
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;
            }
        }
        else
        {
            if(c>d)
            {
                if(b<d || c<a)
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;
            }
            else
            {
                if(d<a || b<c)
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;     
            }

        }

    }
    return 0;
}