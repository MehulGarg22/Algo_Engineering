#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int ma(int a, int b, int c)
{
   if (a>b && a>c)
   {

       return a;

   }
   if (b>a && b>c)
   {

       return b;

   }
   if (c>a && c>b)
   {

       return c;
   }
}

bool check (int d, int e, int f)
{
int b,c;
    int g=ma(d, e, f);
    if (g==d)
    {
     b=e;
     c=f;
    }
    else if(g==e)
    {
        b=d;
        c=f;
    }
    else
    {
        b=d;
        c=e;
    }

    if ((g*g)==(b*b) + (c*c))
        return true;
    else
        return false;
}

int main()
{

    int x,y,z;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    cout<<"Enter z: ";
    cin>>z;
    if (check(x,y,z)==true)
    {
        cout<<"Pythagorean Triplet";
    }
    else{
        cout<<"Not Pythagorean Triplet";
    }


return 0;
}
