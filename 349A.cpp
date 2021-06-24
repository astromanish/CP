#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)


int main()
{
    int c1=0,c2=0;
    int n;
    cin>>n;
    int cur;
    ff(i,0,n)
    {
        cin>>cur;
        if(cur ==100)
        {
            if(c2>=1)
            {
                if(c1>=1)
                {
                    c2--;
                    c1--;
                }
                else
                {
                    cout<<"NO";
                    return 0;
                }
            }
            else
            {
                if(c1>=3)
                {
                    c1-=3;
                }
                else
                {
                    cout<<"NO";
                    return 0;   
                }

            }
        }
        else
        {
            if(cur==50)
            {
                if(c1>=1)
                {
                    c1--;
                    c2++;
                }
                else
                {
                    cout<<"NO";
                    return 0;
                }
            }
            else
                c1++;
        }
    }
    cout<<"YES";

    return 0;
}