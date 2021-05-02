#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Mehul is goood";
    s1.clear();
    cout<<s1<<endl;

    string s2="abc";
    string s3="xyz";
    cout<<s3.compare(s2)<<endl;

    string s4="abc";
    if(s4.compare(s2)==0)   // OR USE if(!s4.compare(s3)
        cout<<"String is Equal"<<endl;

    if(s1.empty())
        cout<<"String is Empty"<<endl;
    if(!s2.empty())
        cout<<"String is Not Empty"<<endl;

    string s5="nincompoop";
    string s6;
    s6=s5.erase(2,3);
    cout<<s6<<endl;

    string s7="nimcompoop";
    int s8;
    s8=s7.find("com");
    cout<<s8<<endl;

    string s9;
    s9=s7.insert(2,"lol");
    cout<<s9<<endl;

    string s10="nimcompoop";
    cout<<s10.length()<<endl;
    cout<<s10.size()<<endl;

    for(int i=0;i<s10.length();i++)
    {
       cout<<s10[i]<<" ";
    }
    cout<<endl;

    cout<<s10.substr(6,4)<<endl;

    string s11="786";
    int x;
    x=stoi(s11);
    cout<<x+2<<endl;

    string s12;
    s12=to_string(x);
    cout<<s12+"2"<<endl;

    return 0;
}
