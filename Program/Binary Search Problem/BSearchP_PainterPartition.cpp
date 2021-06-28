#include<iostream>
using namespace std;

int NoofPainters(int arr[], int mid, int n)
{
    int sum=0; int Painter=1;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum>mid){
            sum=arr[i];
            Painter++;
        }
    }
    return Painter;
}

int PainterPartition(int arr[], int n, int m)
{
    int k=0; int totallength=0;
    for(int i=0;i<n;i++){
        k=max(k, arr[i]);
        totallength+=arr[i];
    }
    int low=k;
    int high=totallength;

    while(low<=high){
        int mid=low+(high-low)/2;
        int painters= NoofPainters(arr, mid, n);
        if(painters<=m){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}

int main()
{
    int arr[]={10,20,30,40};
    int n=4;
    int m=2;
    cout<<"Minimum Painters Required: "<<PainterPartition(arr, n,m);

return 0;
}
