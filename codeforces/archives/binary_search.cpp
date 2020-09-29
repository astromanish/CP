#include <iostream>

using namespace std;

void allocate(int a_size,int ar[]);
int search(int a_size,int n,int ar[]);

int main(void)
{
    int size=100;
    int arr[size];
    allocate(size,arr);
    int n;
    cout<<"Enter number to search:";
    cin>>n;
    cout<<n<< "is at position :" << search(size,n,arr);
    return 0;
}

void allocate(int a_size,int ar[])
{
    for(int i=0;i<a_size;i++)
    {
        ar[i]=i+1;
    }
}

int search(int a_size,int n,int ar[])

