#include<iostream>
#include<bits/stdc++.h>
#define NULL 0
using namespace std;

class node{
public:
    int data;
    node* next;
    node (int val)
    {
        data=val;
        next=NULL;
    }
};

void InsertatTail(node* &head, int val)
{
    node*n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp= temp->next;
    }
    temp->next=n;

}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void Insertatbegin(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    head= n;
}

bool seaarch(node* head, int key){
node* temp=head;
while(temp->next!=NULL)
{
    if(temp->data==key)
    {
        return true;
    }
   temp=temp->next;
}
 return false;
}
void deleteatBegin(node* &head)
{
    node* todelete=head;
    head=head->next;

    delete todelete;
}

void deletion(node* &head, int val)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deleteatBegin(head);
        return;
    }
    node* temp=head;
    while(temp->next->data !=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
}


int main()
{
    node* head=NULL;
    InsertatTail(head, 1);
    InsertatTail(head, 2);
    InsertatTail(head, 3);
    display(head);

    Insertatbegin(head, 4);
    display(head);
    int E;
    cout<<"Enter Element to find: ";
    cin>>E;
    if(seaarch(head,E)==0)
        cout<<"Not found"<<endl;
    else
        cout<<"Element found"<<endl;


    cout<<"Deletion of a node in Linkedlist: "<<endl;
    deletion(head, 3);
    display(head);

    cout<<"Deletion of a node in Linkedlist at begining: "<<endl;
    deleteatBegin(head);
    display(head);

return 0;
}



