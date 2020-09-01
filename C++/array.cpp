#include <iostream>

using namespace std;

void show(int size,int a[]);

int main(void)
{
    int *arr = NULL;
    int current_size = 0;
    int total_size = 0;
    for(int i=0; ;i++)
    {
        int n;
        cout<<"Enter No. :";
        cin>>n;
        if(n==100)
        break;
        if(current_size==total_size)
        {
            arr = (int *)realloc(arr,sizeof(int)*(total_size+1));
            total_size++;
        }
        arr[current_size]=n;
        current_size++;  
    } 
    show(current_size,arr);   
    return 0;
}

void show(int size,int a[])
{
    for(int i=0;i<size;i++)
    {
        cout<<"Your entered no. is :"<<a[i]<<"\n";
    }
}