#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Factorial(int n)
{
    if (n==1)
    {
        return 1;
    }
    int fact=Factorial(n-1);
    return n*fact;
}

int pow(int n, int p)
{
    if(p==0)
    {
        return 1;
    }
    int pw=pow(n,p-1);
    return n*pw;
}

int sume(int n)
{
    if (n==0)
    {
      return 0;
    }
    int p= sume(n-1);
return n + p;
}

int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fib(n-1)+ fib(n-2);
}

int main()
{
    int n,p;
    int sum=0;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Enter Power: ";
    cin>>p;
    cout<<endl;
    cout<<"Sum is: "<<sume(n)<<endl;
    cout<<"Factorial is: "<<Factorial(n)<<endl;
    cout<<"Exponential is: "<<pow(n,p)<<endl;
    cout<<"Fibonacci series is: "<<fib(n)<<endl;
return 0;
}
