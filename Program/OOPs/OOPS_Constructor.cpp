#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class student{
public:
    string name;
    int age;
    int gender;

    ~student(){
    cout<<endl<<"Destructor Called"<<endl;
    }

    student(student &a)
    {
        cout<<endl<<"Copy Constructor";
        name=a.name;
        age=a.age;
        gender=a.gender;
    }

    student(string s, int a, int g)
    {
        name=s;
        age=a;
        gender=g;
    }
    student()
    {
        cout<<"Default Constructor";
    }

    bool operator == (student &a)
    {
        if(name== a.name && age== a.age && gender== a.gender)
            return true;
        else
            return false;
    }

    printinfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }
};


int main(){

student a("Mehul", 20, 1);
a.printinfo();

student b;

student c (a);
cout<<endl;

c.printinfo();

cout<<&a<<endl<<&b<<endl<<&c;

cout<<endl;

if(c==a)
    cout<<"Same";
else
    cout<<"Different";

return 0;
}
