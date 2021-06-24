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
    unordered_map<int,int> m;
    int val;
    ff(i,0,6)
    {
        cin>>val;
        m[val]++;    
    }
    vi v;
    for(auto val:m)
        v.push_back(val.second);
    sort(all(v));
    if(v.back()>=4)
    {
        if(v.back()==4)
        {
            if(m.size()==2)
            {
                cout<<"Elephant"; 
            }
            else
            {
                cout<<"Bear";
            }

        }
        else
        {
            if(v.back()==5)
            {
                cout<<"Bear";
            }
            else
            {
                cout<<"Elephant";
            }
        }
    }
    else
    {
        cout<<"Alien";
    }

    return 0;
}