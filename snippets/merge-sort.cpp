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

const int N = 1e5 + 10;
int a[N];

void merge(int l,int r,int mid){
    int l_size = mid - l +1;
    int L[l_size+1];
    
    for(int i=0;i<l_size;i++)
    {
        L[i]=a[l+i];
    }

    L[l_size]=INT_MAX;

    int r_size = r - mid;
    int R[r_size];

    for(int i=0;i<r_size;i++)
    {
        R[i]=a[mid+1+i];
    }

    R[r_size]=INT_MAX;

    int l_i=0;
    int r_i=0;
    for(int i=l;i<=r;i++)
    {
        if(L[l_i]<=R[r_i])
        {
            a[i]=L[l_i];
            l_i++;
        }
        else
        {
            a[i]=R[r_i];
            r_i++;
        }
    }

}

void mergeSort(int l, int r){
    if(l==r)return;
    int mid = (l+r)/2;
    mergeSort(l,mid);
    mergeSort(mid+1,r);
    merge(l,r,mid);
}


int main()
{
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    mergeSort(0,9);
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}