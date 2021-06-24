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
    int sum=0;
    int val;
    ff(i,0,5)
    {
        cin>>val;
        sum+=val;
    }
    if(sum==0)
    {
         cout<<-1;
         return 0;
    }
    if(sum%5==0)
        cout<<sum/5;
    else
        cout<<-1;
    return 0;
}