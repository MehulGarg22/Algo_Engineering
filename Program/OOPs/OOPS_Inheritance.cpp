#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A{

public:
    void Afunc()
    {
        cout<<"Accessed Function A";
    }
};

class B: public A{

public:
    void Bfunc()
    {
        cout<<"Accessed Function B";
    }
};

class C{

public:
    void Cfunc()
    {
        cout<<"Accessed Function C";
    }
};

class D: public B{
public:
};

class E: public A, public C{
public:

};

class F:public B, public C{
public:

};

int main()
{
    // ---------------------------- Single Inheritance --------------------------------------------
    cout<<"Single Inheritance:"<<endl;
    B obj;
    obj.Afunc();
    cout<<endl<<endl;

    // ---------------------------- Multi-Level Inheritance --------------------------------------------
    cout<<"Multi-Level Inheritance:"<<endl;
    D obj1;
    obj1.Afunc();
    cout<<endl<<endl;

    // ---------------------------- Multiple Inheritance --------------------------------------------
    cout<<"Multiple Inheritance:"<<endl;
    E obj2;
    obj2.Afunc();
    cout<<endl;
    obj2.Cfunc();
    cout<<endl<<endl;

    // ---------------------------- Hybrid Inheritance --------------------------------------------
    cout<<"Hybrid Inheritance:";
    F obj3;
    cout<<endl;
    obj3.Afunc();
    cout<<endl;
    obj3.Bfunc();
    cout<<endl;
    obj3.Cfunc();
    cout<<endl<<endl;

    // ---------------------------- Hierarchical Inheritance --------------------------------------------

    cout<<"Hierarchical Inheritance:";

    cout<<endl<<endl;
return 0;
}
