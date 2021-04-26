#include<iostream>
#include<bits/stdc++.h>

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

void intersect (node* &head1, node* &head2 ,int pos){
node* temp1 =head1;
node* temp2 =head2;
int countt=1;
while(countt!=pos)
{
    temp1=temp1->next;
    countt++;
}
while(temp2->next!=NULL){
    temp2=temp2->next;
}

temp2->next=temp1;

}

int length (node*head)
{
    node* temp=head;
    int l=0;
    while(temp!=NULL){

        temp=temp->next;
        l++;
    }
    return l;
}

int detectintersection (node* &head1,node* &head2){
   node* ptr1;
   node* ptr2;
   int l1=length(head1);
   int l2=length(head2);
   int d=0;
   if(l1>l2){
    d=l1-l2;
    ptr1=head1;
    ptr2=head2;
   }
   if(l2>l1){
    d=l2-l1;
    ptr1=head2;
    ptr2=head1;
   }
   while(d){
    ptr1=ptr1->next;
    if(ptr1->next==NULL)
    {
        return -1;
    }
    d--;
   }
   while(ptr1->next!=NULL && ptr2->next!=NULL)
   {
       ptr1=ptr1->next;
       ptr2=ptr2->next;
       if(ptr1=ptr2)
       {
           return ptr2->data;
       }
   }
   return -1;
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
    InsertatTail(head1, 1);
    InsertatTail(head1, 2);
    InsertatTail(head1, 3);
    InsertatTail(head1, 4);
    InsertatTail(head1, 5);
    InsertatTail(head1, 6);
    InsertatTail(head2, 9);
    InsertatTail(head2, 10);

    intersect(head1, head2, 3);
    display(head1);
    cout<<endl;
    display(head2);
    cout<<endl;
    cout<<detectintersection(head1 ,head2)<<endl;
    return 0;
}
