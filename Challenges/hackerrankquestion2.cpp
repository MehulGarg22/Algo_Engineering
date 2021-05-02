#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    double arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
int posi=0;
int nega=0;
int zero=0;
    for(int i=0;i<n;i++)
    {

        if (arr[i]<0)
        {
            nega++;
        }
        if (arr[i]>0)
        {
            posi++;
        }
        if (arr[i]==0)
        {
            zero++;
        }
    }
    float positive, negative, zeros;

    positive= float(posi)/float(n);
    negative= float(nega)/float(n);
    zeros= float(zero)/float(n);
    cout<<fixed<<positive<< setprecision(6)<<endl;
    cout<<fixed<<negative<< setprecision(6)<<endl;
    cout<<fixed<<zeros<< setprecision(6)<<endl;

return 0;
}
