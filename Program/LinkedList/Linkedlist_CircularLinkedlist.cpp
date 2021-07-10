#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertatHead(node* &head, int val){
    node* n= new node(val);
    node* temp=head;
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}


void insertatTail(node* &head, int val){
    if(head==NULL)
    {
        insertatHead(head, val);
        return;
    }

    node* n= new node(val);
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;

}


void deleteatHead(node* &head){
node* temp=head;
node* todelete=head;

while(temp->next!=head)
{
    temp=temp->next;
}
temp->next=head->next;
head=head->next;
delete todelete;
}


void deletion(node* &head, int pos)
{
    if(pos==1)
    {
        deleteatHead(head);
        return;
    }

    node* temp=head;
    node* todelete;
    int countt=1;
    while(countt!=pos-1)
    {
        temp=temp->next;
        countt++;
    }
    todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

void display(node* head){

    node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}

int main()
{
    node* head= NULL;
    insertatTail(head, 1);
    insertatTail(head, 2);
    insertatTail(head, 3);
    insertatTail(head, 4);
    cout<<"Insert at Tail: ";
    display(head);
    insertatHead(head, 7);
    cout<<"Insert at Head: ";
    display(head);
    cout<<"Deletion: ";
    deletion(head, 2);
    display(head);

    cout<<"Deletion at Head: ";
    deletion(head, 1);
    display(head);

return 0;
}
