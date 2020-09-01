#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,k,num;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    int i=n/3;
    int cnt=0;
    while(i--)
    {
        if(v[i]+k<=5)
        {
            if(v[i+1]+k<=5)
            {
                if(v[i+2]+k<=5)
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
            
        }
        else
        {
            break;
        }
        
    }


    cout<<cnt;
    return 0;
}