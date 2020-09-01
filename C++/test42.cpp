#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    
    int n;
    cin>>n;
    vector<int> v;
    int num;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    int sum=0;
    int cnt=0;
    for(int j=n-1;j>=0;j--)
    {
        if(sum+v[j]>4)
        {
            cnt++;
            sum=v[j];
            continue;
        }
        else
        {
            if(sum+v[j]==4)
            {
                sum=0;
                cnt++;
                continue;
            }
            else
            {
                sum+=v[j];
                if(j==0)
                cnt++;
            }
            
        }
    }

    cout<<cnt;

    
    return 0;
}