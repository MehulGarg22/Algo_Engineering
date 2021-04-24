#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A{
public:
    void funA()
    {
        cout<<"Function A";
    }
private:
    void funB()
    {
        cout<<"Function A";
    }

protected:
    void funC()
    {
        cout<<"Function A";
    }
};

int main()
{
    A obj;
    obj.funA();

    obj.funB();  //Private Function not Accessible.

    obj.funC();  //Protected Function not Accessible.
return 0;
}
