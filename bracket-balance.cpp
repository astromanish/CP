#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define all(v) v.begin(), v.end()
#define ff(a, b, c) for (int a = b; a < c; a++)

unordered_map<char,int> bracket = {{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};

string isBalanced(string s) {
    stack<char> st;
    for(char b:s)
    {
        if(bracket[b]<0)
        {
            st.push(b);
        }
        else
        {
            if(st.empty()) 
                return "NO";
            if(bracket[b]+bracket[st.top()]!=0)
                return "NO";
            st.pop();
        }
    }
    if(st.empty())
        return "YES";
    else
        return "NO";

}
 
 
int main()
{
    string s;
    cin>>s;
    cout<<isBalanced(s);
   return 0;
}