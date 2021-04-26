
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

node* Merge(node* &head1, node* &head2)
{
    node* dummy=new node(-1);
    node* p1=head1;
    node* p2=head2;
    node* p3=dummy;
    while(p1->next!=NULL && p2->next!=NULL)
    {
        if(p1->data<p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }
       else
        {
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1->next!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2->next!=NULL)
    {
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummy->next;
}

node* MergeRecur(node* &head1, node* &head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    node* result;
    if(head1->data < head2->data)
    {
        result=head1;
        result->next=MergeRecur(head1->next, head2);
    }
    else{
        result=head2;
        result->next=MergeRecur(head1, head2->next);
    }
    return result;
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
    node* head1=NULL;
    node* head2=NULL;
    int arr[]={1,3,5,7};
    int arr2[]={2,4,6,8};
    for(int i=0;i<4; i++)
    {
        InsertatTail(head1, arr[i]);
    }
    for(int j=0;j<4; j++)
    {
        InsertatTail(head2, arr2[j]);
    }
    display(head1);
    display(head2);
    cout<<"Iterative way: ";
    // node* newhead=Merge(head1 ,head2);
    // display(newhead);
    cout<<"Recursive way: ";
    node* newhead=MergeRecur(head1 ,head2);
    display(newhead);
    return 0;
}
