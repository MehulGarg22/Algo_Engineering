#include <bits/stdc++.h>

using namespace std;

// Complete the compareTriplets function below.
void compare(int arra[], int arrb[], int n) {
    int PtA=0;
    int PtB=0;
   for(int i=0;i<n; i++)
   {
       if (arra[i]>arrb[i])
       {
           PtA=PtA+1;
       }
       else if (arra[i]<arrb[i])
       {
           PtB=PtB+1;
       }
   }
    
cout<<PtA<<" "<<PtB;
}

int main()
{
    int n;
    cin>>n;
    int arra[n];
    int arrb[n];
    for (int i=0;i<n;i++)
    {
        cin>>arra[i];
    }
    for (int i=0;i<n;i++)
    {
        cin>>arrb[i];
    }
    compare (arra,arrb,n);
    return 0;
}
