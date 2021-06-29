#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int brute_force(int arr[], int n, int k, int x){

    int result=INT_MIN;
    int ans=INT_MIN;
    cout<<"Individual Window sum: ";
    for(int i=0;i<n-k+1; i++){
        int sum=0;
        for(int j=0; j<k;j++){
            sum+=arr[i+j];
        }
        cout<<sum<<" ";
        if(sum<x){
            result=sum;
            ans=max(result, ans);
        }
    }
    cout<<endl;
    cout<<"Max sum in an array is: "<<ans<<" ";
}

int Sliding_WindowTechnique(int arr[], int n, int k, int x)
{
    int currsum=0;
    int maxsum=0;

    for(int i=0; i<k;i++){
        currsum+=arr[i];
    }
    int ans=INT_MIN;

    cout<<"Individual window sum is: ";
    for(int i=k; i<=n; i++){
        int result=currsum;
        currsum=currsum+arr[i]-arr[i-k];
        maxsum=max(maxsum, currsum);
        cout<<result<<" ";
        if(maxsum<x){
            result=maxsum;
            ans=max(result, ans);
        }
    }
    cout<<endl;
    cout<<"Total sum is: "<<ans;
}

int main(){
int n,k;
cout<<"Enter value of Window(k): ";
cin>>k;
int arr[]={ 7,5,4,6,8,9 };
n=sizeof(arr)/sizeof(arr[0]);
cout<<endl;

cout<<"Brute Force Method: "<<endl;
brute_force(arr,n,k, 20);    // Time-Complexity: O(N*K)
cout<<endl<<endl<<endl;

cout<<"Sliding Window Method: "<<endl;
Sliding_WindowTechnique(arr, n, k, 20);
cout<<endl<<endl<<endl;

return 0;
}


