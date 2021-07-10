#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
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
    int currsum[n+1];
    currsum[0]=0;
    for (i=0;i<=n;i++)
    {
        currsum[i]=currsum[i-1]+arr[i-1];
    }
    int maxSum=INT_MIN;
    for (int i=1;i<=n;i++)
    {
        int sum=0;
        maxSum=max(maxSum, currsum[i]);
        for (int j=0;j<i;j++)
        {
            sum=currsum[i]-currsum[j ];
            maxSum=max(sum,maxSum);
        }
    }
    cout<<maxSum<<endl;
return 0;
}
