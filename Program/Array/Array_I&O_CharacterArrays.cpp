#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number of Words"<<endl;
    cin>>n;
    cout<<"Enter Words: "<<endl;
    char arr[n+1];
    cin>>arr;
    cout<<endl;
    int i=0;
    while (arr[i]!='\0')
    {
        cout<<arr[i]<<endl;
        i++;
    }
    return 0;
}
