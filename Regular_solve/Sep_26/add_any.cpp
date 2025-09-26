#include<bits/stdc++.h>
using namespace std;

class node
{
public:

    int val;
    node* next;

    node(int val)
    {
        this->val = val;
        this->next = nullptr;

    }
};

void add_last(node* &head,int val)
{

    node* newNode = new node(val);

    // if node is empty

    if(head==nullptr)
    {
        head=newNode;
        return;
    }

    node* temp = head;

    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }

    temp->next = newNode;
}

void print_linkedList(node* head)
{

    node* temp = head;

    cout<<"Your LinkList value  is : ";

    while(temp!=nullptr)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    }

    cout<<"\n";
}

void insert_anyPosition(node* head,int pos,int val)
{
    node* newNode = new node(val);

    node* temp = head;

    for(int i=1; i<=pos-1; i++)
    {
        temp=temp->next;
    }

    newNode->next=temp->next;
    temp->next = newNode;
}

int main()
{
    node* head=nullptr;

    while(true)
    {
        cout<<"Option 1 for last add!"<<endl;
        cout<<"Option 2 for printLinkedList!"<<endl;
        cout<<"Option 3 for intertAnyPosition!"<<endl;
        cout<<"Option 4 for exit this program!"<<endl;

        cout<<endl;
        cout<<"Enter your choice : "<<endl;
        int op;
        cin>>op;

        if(op==1)
        {
            cout<<"Enter a value to insert at tail : ";
            int val;
            cin>>val;
            add_last(head,val);

        }
        else if(op==2)
        {
             print_linkedList(head);
        }
        else if(op==3)
        {
            int pos,val;
            cout<<"Enter the position : ";
            cin>>pos;
            cout<<"Enter the value : ";
            cin>>val;

            insert_anyPosition(head,pos,val);
        }
        else if(op==4)
        {
            break;
        }
    }

}

