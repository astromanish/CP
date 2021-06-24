#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define all(v) v.begin(), v.end()
#define ff(a, b, c) for (int a = b; a < c; a++)
 
 
int main()
{
   int n;
   cin>>n;
   vector<int> v(n);
   ff(i,0,n)
   {
       cin>>v[i];
   } 
   stack<int> st;
   vector<int> nge_in(n);
   ff(i,0,n)
   {
       while(!st.empty() && v[i]>v[st.top()])
       {
           nge_in[st.top()]=i;
           st.pop();
       }
       st.push(i);
   }
    while(!st.empty())
    {
        nge_in[st.top()]=-1;
        st.pop();
    }
    ff(i,0,n)
    {
        cout<<v[i]<<" "<<(nge_in[i]==-1? -1:v[nge_in[i]])<<endl;
    }
   return 0;
}