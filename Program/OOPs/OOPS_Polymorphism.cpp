#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class FuncOverload{
public:
    void Afunc(){
    cout<<"Without Parameter"<<endl;
    }
    void Afunc(int x){
    cout<<"with Parameter"<<endl;
    }
    void Afunc(double y)
    {
    cout<<"With different parameter"<<endl;
    }

};

class OperOverload{
public:

};


int main()
{
    FuncOverload obj;
    obj.Afunc();
    obj.Afunc(23);
    obj.Afunc(2.4);

    OperOverload obj2;


return 0;
}
