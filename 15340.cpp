#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)



int main()
{
    int t;
    cin >> t;
    int n,m;
    while (t--)
    {
        cin>>n>>m;
        char arr[n+2][m+2] = {'0'};
        ff(i,1,n+1)
        {
            ff(j,1,m+1)
            {
                cin>>arr[i][j];
            }
        }
        bool p=true;
        ff(i,1,n+1)
        {
            ff(j,1,m+1)
            {
                map<char,int> m;
                    m[arr[i-1][j]]++;
                    m[arr[i+1][j]]++;
                    m[arr[i][j-1]]++;
                    m[arr[i][j+1]]++;  
                    if( (m['W']>0 && m['R']>0 && arr[i][j]=='.') || (m['R']>0 && arr[i][j]=='R') || (m['W']>0 && arr[i][j]=='W') )
                    {
                        p = false;
                        break;
                    } 
                    if(arr[i][j]=='.')
                    {
                        if(m['R']>0)
                            arr[i][j]='W';
                        else
                            arr[i][j]='R';
                    }                     
                m.clear();
            }
            if(!p)
                break;
        } 
        if(p)
        {
            cout<<"YES"<<endl;
            ff(i,1,n+1)
            {
                ff(j,1,m+1)
                {
                    cout<<arr[i][j];
                }
                cout<<endl;
            }

        } 
        else
            cout<<"NO"<<endl;   
    }
    return 0;
}