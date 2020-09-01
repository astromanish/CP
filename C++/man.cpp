#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s,s2;
    cin>>s>>s2;
    vector<int> n;
    for(int num: s)
    {
        n.push_back(num-48);
    }
    sort(n.begin(),n.end());
    int l=n.size();
    auto it=n.begin();
    for(int i=0;i<l;i++)
    {
        if(n[i]!=0 && i!=0)
        {
            
            n.insert(it,n[i]);
            n.erase(n.begin()+i+1);
          
            break;
        }
    }
    for(int l1:n)
    cout<<l1;
    cout<<endl;
    vector<int> man;
    for(int ma:s2)
    {
        man.push_back(ma-48);
    }
    if(man==n)
    cout<<"OK";
    else
    {
        cout<<"WRONG_ANSWER";
    }
    
    return 0;
}