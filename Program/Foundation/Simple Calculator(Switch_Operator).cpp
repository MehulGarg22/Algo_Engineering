#include<iostream>
using namespace std;
int main()
{
char calculate;
cout<<"Type a for Addition"<<endl;
cout<<"Type s for Substraction"<<endl;
cout<<"Type m for Multiplication"<<endl;
cout<<"Type d for Division"<<endl;
cin>>calculate;
int add, subs, multi,div, x,y;
cout<<"Enter First Number x"<<endl;
cin>>x;
cout<<"Enter Second Number y"<<endl;
cin>>y;
cout<<endl;
switch(calculate)
    {
    case'a':
        add=x+y;
        cout<<"Addition of Numbers is: ";
        cout<<add<<endl;
        break;
    case's':
        subs=x-y;
        cout<<"Substraction of Numbers is: ";
        cout<<subs<<endl;
        break;
    case'm':
        multi=x*y;
        cout<<"Multiplication of Numbers is: ";
        cout<<multi<<endl;
        break;
    case'd':
        div=x/y;
        cout<<"Division of Numbers is: ";
        cout<<div<<endl;
        break;
    default:
       cout<<"No Operation Selected"<<endl;
    }

return 0;
}
