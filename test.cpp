#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define all(v) v.begin(), v.end()
#define ff(a, b, c) for (int a = b; a < c; a++)
 
 
int main()
{
    vector<int> nums={1,2,1};
    stack<int> st;
        int l = nums.size();
        unordered_map<int,int> nge_in;
        for(int i=0;i<l;i++)
        {
            while(!st.empty() && nums[i]>nums[st.top()])
            {
                nge_in[st.top()]=i;
                st.pop();
            }
            st.push(i);   
        }
        while(!st.empty())
        {
            if(st.size()==1)
            {
                nge_in[st.top()]=-1;
                st.pop();
            }
            else
            {
                for(int i=0;i<l;i++)
                {
                    if(nums[i]>nums[st.top()])
                    {
                        nge_in[st.top()]=i;
                        st.pop();
                    }
                    
                }
            }   
        }
        vector<int> ans;
        for(int i=0;i<l;i++)
        {
            //cout<<(nge_in[i]==-1?-1:nums[nge_in[i]])<<" ";
            ans.push_back(nge_in[i]==-1?-1:nums[nge_in[i]]);
        }
   return 0;
}