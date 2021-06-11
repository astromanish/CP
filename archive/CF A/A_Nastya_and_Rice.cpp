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
    int k;
    int m;
    int i, j;
    int a,b,c,d;
    while (t--)
    {
        cin>>n>>a>>b>>c>>d;
        if((n*(a-b)>=(c-d) && n*(a+b)<=(c+d) )|| (n*(a+b)>=(c-d) && n*(a+b)<=(c+d)) || (n*(a-b)<=(c-d) && n*(a+b)>=(c+d)))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}