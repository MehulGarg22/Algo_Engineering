#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
stack <char> st;
bool flag=true;
for(int i=0;i<s.length();i++)
{
    if(s[i]=='{' || s[i]=='(' || s[i]=='['){

        st.push(s[i]);

       }
    else if(!st.empty() && s[i]==')')
    {
            if(st.top()=='(')
            {
                st.pop();
            }
            else
            {
                flag=false;
                break;
            }
    }

    else if(s[i]=='}')
    {
            if(!st.empty() && st.top()=='{')
            {
                st.pop();
            }
            else
            {
                flag=false;
                break;
            }
    }

    else if(s[i]==']')
    {
            if(!st.empty() && st.top()=='[')
            {
                st.pop();
            }
            else
            {
                flag=false;
                break;
            }
    }
}

if(!st.empty())
{
    return false;
}

return flag;

}

int main()
{
    cout<<isValid("{([])}");
    return 0;
}
