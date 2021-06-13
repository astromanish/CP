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

int BinarySearch(vi arr, int l, int r, int k)
{
    if(r>=l)
    {
        int mid = (l+r)/2;
        if(arr[mid]==k)
            return mid;
        else
        {
            if(arr[mid]>k)
                return BinarySearch(arr,l,mid,k);
            else
                return BinarySearch(arr,mid+1,r,k);
        }
    }
    return -1;
}

int main()
{

    int arr[]= {1,2, 3,4,5,6};
    vi v = {1,2, 3,4,5,6};
    sort(all(v));
    sort(arr,arr+6);
    //cout<<BinarySearch(arr,0,5,1);
    cout<<BinarySearch(v,0,5,10);

    return 0;
}