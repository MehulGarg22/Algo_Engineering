#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

void insertatBottom(stack<int> &st, int temp)
{
    if(st.empty())
    {
        st.push(temp);
        return;
    }
    int topelement=st.top();
    st.pop();
    insertatBottom(st, temp);
    st.push(topelement);
}

void reversestack(stack<int>&st)
{
    if(st.empty())
    {
        return;
    }

    int temp=st.top();
    st.pop();
    reversestack(st);
    insertatBottom(st, temp);

}

int main()
{
    stack <int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    reversestack(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
    return 0;
}
