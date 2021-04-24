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

void Insertion(node* &head, int val)
{
    node* n= new node(val);
    if (head==NULL){
        head=n;
        return;
    }
    node* temp= head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void makecycle (node* &head, int pos)
{
    node* temp=head;
    node* startnode;
    int countt=1;
    while (temp->next!=NULL)
    {
        if(countt==pos)
        {
            startnode=temp;
        }
        temp=temp->next;
        countt++;
    }
    temp->next=startnode;

}

bool detectCycle(node* head)
{
    node* slow=head;
    node* fast=head;

    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            return true;
        }
    }
return false;

}

void Removecycle(node* head)
{
    node*fast= head;
    node*slow=head;


    do {
        fast=fast->next->next;
        slow=slow->next;
    } while(fast!=slow);


    fast=head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}


void display(node* head)
{
    node* temp=head;
    while(temp->next!=NULL)
    {

        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node* head=NULL;
    Insertion(head, 2);
    Insertion(head, 3);
    Insertion(head, 4);
    Insertion(head, 5);
    Insertion(head, 6);
    Insertion(head, 7);
    Insertion(head, 8);
    display(head);

    makecycle(head, 4);
    // display(head);

    cout<<detectCycle(head)<<endl;
    Removecycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);
    return 0;
}
