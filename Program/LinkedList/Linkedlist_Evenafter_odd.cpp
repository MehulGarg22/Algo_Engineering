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

void evenafterodd(node* &head)
{
    node* evenstart=head->next;
    node* odd=head;
    node* even=head->next;

    while(odd->next!=NULL && even->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
    if(odd->next==NULL)
    {
        even->next=NULL;
    }
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
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5; i++)
    {
        InsertatTail(head, arr[i]);
    }
    display(head);
    evenafterodd(head);
    display(head);
    return 0;
}

