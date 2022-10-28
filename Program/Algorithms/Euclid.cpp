#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return b;
}

int main()
{
    int a, b;
    cout<<"Enter Number: ";
    cin>>a>>b;

    cout<<GCD(a, b);
return 0;
}
