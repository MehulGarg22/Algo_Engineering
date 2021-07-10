#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define n 100
class stackk{

int* arr;
int top;

public:
    stackk(){
        arr= new int[n];
        top=-1;
    }

    void push(int x){
        if(top==n-1)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;

    }
    void pop()
    {
            if(top==-1)
            {
                cout<<"No Element to Pop "<<endl;
                return;
            }
            top--;
    }
    int Top()
    {
          if(top==-1)
          {
              cout<<"Stack is Empty"<<endl;
              return -1;
          }
          return arr[top];
    }

    bool emptyy(){
        if(top==-1)
        {
            return 1;
        }
    }

};

int main()
{
    stackk st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.emptyy()<<endl;

return 0;
}
