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

class que{

public:
    node* front;
    node* back;

    que()
    {
        front=NULL;
        back=NULL;
    }
    void enqueue(int x)
    {
        node* n=new node(x);
        if(front==NULL)
        {
            back=n;
            front=n;
            return;
        }
        back->next=n;
        back=n;
    }
    void dequeue()
    {
        if(front==NULL)
        {
            cout<<"Queue is Empty ";
            return;
        }
        node* todelete=front;
        front=front->next;

        delete todelete;
    }

    int peek()
    {
        if(front==NULL){
            cout<<"Queue is empty";
            return -1;
        }
        return front->data;
    }

    bool empty()
    {
        if(front==NULL)
        {
            return true;
        }
        return false;
    }

};

int main()
{
    que q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout<<q.peek()<<endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();

    cout<<q.peek()<<endl;

    q.dequeue();
    q.dequeue();

    cout<<q.empty();
return 0;
}
