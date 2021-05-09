#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

class que{

stack<int> s1;
stack<int> s2;

public:
    void push(int x)
    {
        s1.push(x);
    }
    int pop(){

        if(s1.empty() && s2.empty())
        {
            cout<<"Stack is Empty";
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topvalue=s2.top();
        s2.pop();
        return topvalue;
    }

    bool empty(){
    if(s1.empty() && s2.empty())
        return true;
    return false;

    }

};

int32_t main(){

que q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);



cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;


q.push(6);
cout<<q.pop()<<endl;

cout<<"Is Queue Empty: Yes=1, No=0: "<<q.empty()<<endl;

return 0;

}
