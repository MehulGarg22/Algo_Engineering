#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    int arr[n];
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int mx=0; int mn=0;
    for(int i=0;i<n/2;i++){
        mx+=(arr[i+n/2]-arr[i]);
        mn+=(arr[2*i+1]-arr[2*i]);
    }
    cout<<endl<<"Maximum difference is: "<<mx<<endl<<"Minimum difference is: "<<mn<<endl;
return 0;
}
