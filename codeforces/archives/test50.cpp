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
    int m= *min_element(v.begin(),v.end());
    vector<int> v1;
    v1 = v.copy();
    int cnt = it1-it;
    if(cnt==1)

    return 0;
}