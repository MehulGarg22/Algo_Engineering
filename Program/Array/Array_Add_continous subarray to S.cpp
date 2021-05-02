#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cout<<"Enter no of Element to be stored in an array: ";
    cin>>n>>s;
    int i;
    int arr[n];
    cout<<endl;
    cout<<"Enter Elements in an array: "<<endl;
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j=0, st=-1, en=-1, sum=0;
    while (j<n && sum+arr[j]<=s)
    {
        sum+=arr[j];
        j++;
    }
    if (sum==s)
    {
        cout<< i+1<<" "<<j<<endl;
        return 5;
    }

    while(j<n)
    {
        sum+=arr[j];
        while (sum > s)
        {
            sum -= arr[i];
            i++;
        }
        if(sum == s)
        {
            st=i+1;
            en=j+1;
        }
        j++;
        cout<<st<<" "<<en<<endl;

    }


return 0;
}
