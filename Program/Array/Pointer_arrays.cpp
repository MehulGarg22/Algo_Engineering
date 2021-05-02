#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={10, 20, 30, 40};
    cout<<"Value of a is: "<<a<<endl;
    int* aptr=a;
    cout<<"Value of aptr is (address): "<<aptr<<endl;
    cout<<"Value of *aptr is (Dereferencing): "<<*aptr<<endl; //Dereferencing

    for(int i=0;i<4;i++)
    {
        cout<<*aptr<<endl;
        aptr++;
        i++;
    }
    cout<<"-----------------------------------------"<<endl;

    for(int i=0; i<4;i++)
    {
        cout<<*(a+i)<<endl;
    }

return 0;
}

