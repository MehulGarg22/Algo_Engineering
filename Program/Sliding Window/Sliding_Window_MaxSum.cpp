#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int brute_force(int arr[], int n, int k){

    int result=INT_MIN;

    cout<<"Individual Window sum: ";
    for(int i=0;i<n-k+1; i++){
        int sum=0;
        for(int j=0; j<k;j++){
            sum+=arr[i+j];
        }
        result=max(result, sum);
        cout<<result<<" ";
    }
    cout<<endl;
    cout<<"Max sum in an array is: "<<result<<" ";
}

int Sliding_WindowTechnique(int arr[], int n, int k)
{
    int currsum=0;
    int maxsum=0;

    for(int i=0; i<k;i++){
        currsum+=arr[i];
    }

    cout<<"Individual window sum is: ";
    for(int i=k; i<n; i++){
        currsum=currsum+arr[i]-arr[i-k];
        cout<<currsum<<" ";
        maxsum=max(maxsum, currsum);
    }
    cout<<endl;
    cout<<"Total sum is: "<<maxsum;
}

int main(){
int n,k;
cout<<"Enter value of Window(k): ";
cin>>k;
int arr[]={ 1, 4, 2, 10, 2, 3, 1, 0, 20 };
n=sizeof(arr)/sizeof(arr[0]);
cout<<endl;

cout<<"Brute Force Method: "<<endl;
brute_force(arr,n,k);    // Time-Complexity: O(N*K)
cout<<endl<<endl<<endl;

cout<<"Sliding Window Method: "<<endl;
Sliding_WindowTechnique(arr, n, k);
cout<<endl<<endl<<endl;


return 0;
}

