#include <iostream>

using namespace std;

class node
{
    public:
    int data;
    node *next;
};

void traverse(node *a);

int main(void)
{   
    //create 3 pointer to node and intially point it to null
    node *head = NULL;
    node *first = NULL;
    node *second = NULL;
    //now create three node and make those 3 pointer point to these node respectively
    head = new node();
    first = new node();
    second = new node();
    //now put data in them and create link between them
    head->data=1;
    head->next=first;
    first->data=2;
    first->next=second;
    second->data=3;
    second->next=NULL;
    traverse(head);
    char ques;
    askagain : cout<<"Wanna add more elements? y/n \n";
    cin>>ques;
    if(!(ques=='y' || ques=='n'))
    {
        cout<<"Invalid Input!! \n";
        goto askagain;
    }
    if(ques=='y')
    {
    int n;
    cout<<"Number: ";
    cin>>n;
    node *new_node = new node();
    new_node->data = n;
    new_node->next = head;
    head = new_node;
    traverse(head);
    goto askagain;
    }
    delete[] new_node;
    return 0;
}

void traverse(node *a)
{
    cout<<"\n";
    while(a!=NULL)
    {
        cout<<a->data<<"\t";
        a=a->next;
    }
    cout<<"\n";
}