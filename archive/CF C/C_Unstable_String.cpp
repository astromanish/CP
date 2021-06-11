#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)
#define fb(a, b, c) for (int a = b; a > c; a--)

#define MOD 1e9 + 7

int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin>>s;
        int l = s.length();
        char last = 'x';
        bool p = true;
        ff(i,0,l)
        {
            if(s[i]!='?' && last!='?' && s[i]==last )
            {
                p = false;
                break;     
            }
            last=s[i];
        }
        if(p)
            cout<<l*(l+1)/2<<endl;
        else
            cout<<"Nahi pta yar"<<endl;
    }
    return 0;
}