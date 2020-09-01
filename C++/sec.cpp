#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    int cnt=0;
    while(t--)
    {
        cin>>n;
        int arr[2*n];
        for(int i=0;i<2*n;i++)
        {
            cin>>arr[i];
        }
        do
        {
            cnt=0;
            for(int j=0;j<n;j++)
            {
                if(arr[j]!=arr[j+n])
                break;
                else
                {
                    cnt++;
                    if(cnt==n)
                    break;
                }
                
            }
            if(cnt==n)
            break;
        } while (next_permutation(arr,arr+2*n));
        for(int k=0;k<n;k++)
        {
            cout<<arr[k]<<" ";
        }
        cout<<endl;
        

    }
    return 0; 
}