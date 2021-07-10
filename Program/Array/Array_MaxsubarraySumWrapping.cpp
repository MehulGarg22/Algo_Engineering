#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n)
{
    int currsum=arr[0];
    int maxSum=INT_MIN;
    for (int i=0;i<n;i++)
    {
        currsum=max(arr[i],currsum+arr[i]);
        maxSum=max(currsum,maxSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cout<<"Enter no of Element to be stored in an array: ";
    cin>>n;
    int i;
    int arr[n];
    cout<<endl;
    cout<<"Enter Elements in an array: "<<endl;
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int NonWrapSum;
    int WrapSum;

    NonWrapSum=kadane(arr,n);
    int totalsum=0;
    for (int i=0; i<n;i++)
    {
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }

    WrapSum= totalsum+kadane(arr,n);
    cout<<max(NonWrapSum, WrapSum)<<endl;

return 0;
}
