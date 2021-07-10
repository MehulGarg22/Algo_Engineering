#include<iostream>
using namespace std;

class Students_Method_1{
public:
    string name;
    int age;
    bool gender;

};

void Method_1()
{
    cout<<"For Less Inputs "<<endl;
    Students_Method_1 a;                          // Declaring datatype of a

// For Input

    cout<<"Name is: ";
    cin>>a.name;
    cout<<"Age is: ";
    cin>>a.age;
    cout<<"Gender is: ";
    cin>>a.gender;

    cout<<endl;

// For Printing

    cout<<"Name is: "<<a.name<<endl;
    cout<<"Age is: "<<a.age<<endl;
    cout<<"Gender is: "<<a.gender<<endl;
}


//------------------------------------------------------------------------------------------------------------------------------------------


class Students_Method_2
{
    public:
    string name;
    int age;
    bool gender;

    void printInfo()
    {
    cout<<"Name is: "<<name<<endl;
    cout<<"Age is: "<<age<<endl;
    cout<<"Gender is: "<<gender<<endl;
    }
};

Method_2()
{
    Students_Method_2 arr[3];
    for(int i=0; i<3; i++)
    {
        cout<<endl;
        cout<<"Name is: ";
        cin>>arr[i].name;
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

int  main()
{
    Method_1();
    cout<<"Lots of Entries: "<<endl;
    Method_2();

return 0;
}
