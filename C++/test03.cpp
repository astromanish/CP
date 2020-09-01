#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int ar[n];
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>> ar[i];
        sum+=ar[i];
    }
    cout<<setprecision(14)<<sum/n;
    return 0;
}