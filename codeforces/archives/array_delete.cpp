#include<iostream>

using namespace std;

//function prototypes
int search(int a,int b,int ar[]);
void show(int size,int a[]);
void allot(int a,int ar[]);

int main(void)
{
    int current_size=10;
    int arr[current_size];
    allot(current_size,arr);  //allocate number in array
    show(current_size,arr);   // show array elements before any deletion
    int n;
    start : cout<<"Enter number to delete: \n";
    cin>>n;
    int index = search(current_size,n,arr); //search index of number to be delete
    if(index<0)   //check for whether number to be deleted may not present in array
    cout<<"Number not in array! \n";
    else
    {
        for(int i=index;i<current_size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        current_size--;
    }
    
    show(current_size,arr);
    char ques;
    do
    {
        cout<<"Wanna delete more numbers? y/n \n";
        cin>>ques;
    } while (!(ques=='y' || ques=='n'));
    if(ques == 'y')
    goto start;

    return 0;
}

void allot(int a,int ar[])
{
    for(int i=0;i<a;i++)
    {
        ar[i]=i;
    }
}

int search(int a,int b,int ar[])
{
    for(int i=0;i<a;i++)
    {
        if(ar[i]==b)
        return i;
    }
    return -1;
}

void show(int size,int a[])
{
    cout<<"Numbers are : \n";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\v";
}