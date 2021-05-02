#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;

int sum_subarray(int arr[], int n){
    int currsum=0;
    int maxSum=INT_MIN;
    for (int i=0;i<n;i++)
    {
        currsum+=arr[i];
        if (currsum<0)
        {
            currsum=0;
        }
        maxSum=max(currsum,maxSum);
    }
    return maxSum;
}

int Negative_input(int arr[], int n)
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

int Indices(int arr[], int n)
{
    int currsum=0;
    int maxSum=INT_MIN;
    int start=0, ending=0, s=0, e=0;
    for (int i=0;i<n;i++)
    {
        currsum+=arr[i];
        if (currsum<0)
        {
            currsum=0;
            s=i+1;
        }
        if (currsum>maxSum){
            maxSum= currsum;
            start=s;
            ending=i;
        }

    }
    cout<<"MaxSum is: "<<maxSum<<endl;
    cout<<"starting Index is: "<<start<<endl;
    cout<<"Ending Index is: "<<ending<<endl;
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
    cout<<"Maximum sum of continous segment is: "<<sum_subarray(arr,n)<<endl;
    cout<<"Handle Negative Input: "<<Negative_input(arr,n)<<endl;
    Indices(arr,n);

return 0;
}
