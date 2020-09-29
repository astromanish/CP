#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    int min = *min_element(v.begin(),v.end());
    auto it1= lower_bound(v.begin(),v.end(),min);
    auto it2 = upper_bound(v.begin(),v.end(),min);
    cout<<it2-it1;
    cout<<endl<<it1-v.begin()<<endl;
    if(it2-it1>1)
    cout<<"Still Rozdil";
    else
    {
        cout<<it1-v.begin()+1;
    }
    
    return 0;
}