
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

    cout<<"value of temp is: "<<temp->data<<endl;
    cout<<"value of temp is: "<<temp<<endl;
    cout<<"value of n is: "<<n->data<<endl;
    cout<<"value of temp->next is: "<<temp->next<<endl<<endl<<endl<<endl;
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


int main()
{
    node* head=NULL;
    InsertatTail(head, 1);
    InsertatTail(head, 2);
    InsertatTail(head, 3);
    display(head);

    return 0;
}
