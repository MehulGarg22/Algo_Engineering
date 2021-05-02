#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Factorise(int n)
{
     int spf[100];

     for(int i=2; i<=n; i++)
     {
         spf[i]=i;
     }
     for(int i=2;i*i<=n; i++)
     {
         if (spf[i]==i)
         {
             for(int j=i*i; j<=n; j+=i)
             {
                 if(spf[j]==j)
                 {
                     spf[j]=i;
                 }
             }
          }
     }
     cout<<n<<endl;
     cout<<"spf: "<<spf[n]<<endl;
     while (n!=1)
     {
         cout<<spf[n]<<" "<<endl;
         n=n/spf[n];
     }
}

int main()
{
        int n;
    cin>>n;
    Factorise(n);

return 0;
}

