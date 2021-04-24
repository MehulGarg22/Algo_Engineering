
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
int Length(node* head)
{
    int l=0;
    node* temp=head;
    while (temp->next!=NULL){
        l++;
        temp=temp->next;
    }
    cout<<l;
    return l;
}
node* KAppend (node* &head, int k)
{
    node* newTail;
    node* newHead;
    node* tail=head;
    int l=Length(head);
        k=k%l;
    int countt=1;

    while (tail->next!=NULL)
    {
        if(countt==l-k)
        {
            newTail=tail;
        }
        if(countt==l-k+1)
        {
            newHead=tail;
        }
        tail=tail->next;
        countt++;
    }
    newTail->next=NULL;
    tail->next=head;
    return newHead;

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

    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        InsertatTail(head, arr[i]);
    }
    display(head);
    node* newHead=KAppend(head, 3);
    display(newHead);
    return 0;
}
