#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    vector<int> v;
    int num;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        v.push_back(num);
    }
    int a,b;
    while(t--)
    {
        cin>>a>>b;
        int min = *min_element(v.begin()+a,v.begin()+b);
        cout<<min<<endl;
    }
    

    return 0;
}