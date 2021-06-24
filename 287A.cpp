#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)


int main()
{
    char arr[4][4];
    ff(i,0,4)
    {
        ff(j,0,4)
        {
            cin>>arr[i][j];
        }
    }
    ff(i,0,3)
    {
        ff(j,0,3)
        {
            int cnt= (arr[i][j]=='#'? 1:0)+ (arr[i+1][j]=='#'? 1:0) + (arr[i][j+1]=='#'? 1:0) + (arr[i+1][j+1]=='#'? 1:0) ;
            if(cnt!=2)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}