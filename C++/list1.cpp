#include <iostream>

using namespace std;

class node
{
    public:
    int data;
    node *next;
};

void show(node *a);
void push(node **a,int b);
void pop(node **a,int b);

int main(void)
{
    node *head = NULL;
    node *first = NULL;
    node *second = NULL;

    head = new node();
    first = new node();
    second = new node();

    head->data=1;
    head->next=first;

    first->data=2;
    first->next=second;

    second->data=3;
    second->next=NULL;

    show(head);

    char ques;
    askagain: cout<<"Want to add/delete/nothing more elements? (a/d/n) \n";
    cin>>ques;
    if(!(ques=='a' || ques=='d' || ques=='n'))
    {
        cout<<"Invalid input! Enter again please \n";
        goto askagain;
    }

    if(ques=='a')
    {
        int n;
        cout<<"Enter number to add : \n";
        cin>>n;
        push(&head,n);
        show(head);
    }
    if(ques=='d')
    {
        int d;
        show(head);
        cout<<"Enter number to delete: \n";
        cin>>d;
        pop(&head,d);
        show(head);
    }
    return 0;
}

void show(node *a)
{
    while(a!=NULL)
    {
        cout<<a->data<<"\t";
        a=a->next;
    }
    cout<<"\n";
}

void push(node **a,int b)
{
    node *new_node = new node();
    new_node->data=b;
    new_node->next=*a;
    *a=new_node;
}

void pop(node **a,int b)
{
    
}