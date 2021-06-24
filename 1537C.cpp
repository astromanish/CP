#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int> 
#define vl vector<long long> 

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        ff(i,0,n)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        swap(arr[1],arr[n-1]);
        ff(i,0,n)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}