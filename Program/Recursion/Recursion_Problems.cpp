#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

void revers (string s)
{
    if(s.length()==0)
    {
        return;
    }
    string ros= s.substr(1);
    revers(ros);
    cout<<s[0];
}
void replacepi (string s)
{
    if(s.length()==0)
    {
        return;
    }
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacepi(s.substr(2));
         cout<<endl<<s.length();
    }
    else{
        cout<<s[0];
        replacepi(s.substr(1));
    }

}

int main()
{
    revers("binod");
    cout<<endl;
    replacepi ("pipx");
    return 0;
}
