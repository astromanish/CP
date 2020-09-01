
#include<iostream>
#include <vector>
#include<algorithm>

using namespace std;


int main()
{
	int n, k;
	cin>>n>>k;
	
	vector <int > v;
	for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
		
	sort(v.begin(),v.end());
	int med = n/2 ;
	
	long long ans = v[med];
	
	long long low = 0 , high = 1e18 + 90;
	while(low <= high){
		long long mid = low + ( (high-low) >> 1);
		
		long long sum = 0;
		for(int i = med ; i < n ; i ++){
			if(v[i] <= mid)
				sum += (mid - v[i]);
			if(sum > k)
				break ;
			
		}
		
		if(sum <= k){
			ans = max(ans,mid);
			low = mid + 1;
		}
		else
			high = mid - 1;
		
	}
	
	cout<<ans;

	
    return 0;
}

