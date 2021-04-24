#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{

public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void Insertion(node* &head, int val)
{
  node* n= new node(val);
  if(head==NULL)
  {
      head=n;
      return;
  }
  node* temp=head;
  while(temp->next!=NULL)
  {
      temp=temp->next;
  }
  temp->next= n;
}

display(node* head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}

node* revers(node* head)
{
    node* prevptr=NULL;
    node* currptr= head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
node* reverserecu(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newhead=reverserecu(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}
node* ReverKNodes(node* &head, int k)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int countt=0;
    while (currptr!=NULL && countt<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        countt++;
    }
    if(nextptr!=NULL)
   {
        head->next=ReverKNodes(nextptr, k);
   }

    return prevptr;
}



int main()
{   node* head=NULL;
    Insertion(head, 2);
    Insertion(head, 3);
    Insertion(head, 5);
    Insertion(head, 6);
    display(head);

    cout<<endl<<"Reverse  Recursive is: "<<endl;
    node*newhead=reverserecu(head);
    display(newhead);


    cout<<endl<<"Reverse is: "<<endl;
    node* newhead1= revers(newhead);
    display(newhead1);

    cout<<endl<<"Reverse K Nodes is: "<<endl;
    node* newhead2= ReverKNodes(head, 2);
    display(newhead2);
    return 0;
}
