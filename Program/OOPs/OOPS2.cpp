#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Students
{
    string name;
    public:
    int age;
    bool gender;
    void setName(string s){
    name=s;
    }
    void printInfo()
    {
    cout<<"Name is: "<<name<<endl;
    cout<<"Age is: "<<age<<endl;
    cout<<"Gender is: "<<gender<<endl;
    }
};

int main()
{

    Students arr[3];
    for(int i=0; i<3; i++)
    {
        cout<<endl;
        cout<<"Name is: ";
        string s;
        cin>>s;
        arr[i].setName(s);
        cout<<"Age is: ";
        cin>>arr[i].age;
        cout<<"Gender is: ";
        cin>>arr[i].gender;
    }
    cout<<endl<<"Output is: "<<endl;
    for(int i=0; i<3; i++)
    {
        arr[i].printInfo();
    }

}
