#include<iostream>
using namespace std;

int PeakElement(int arr[], int n)
{
    int low=0; int high=n-1;
    while(low<=high){
        int mid= low+(high-low)/2;
        if(mid==0 || arr[mid-1]<= arr[mid] && mid==n-1 || arr[mid+1]<= arr[mid]){
            return mid;
        }
        if(mid>0 || arr[mid-1]>arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
}

int main()
{
    int arr[]={0,6,8,5,7,9};
    int n=6;
    cout<<"Peak Element is: "<<PeakElement(arr, n);
    cout<<endl;

return 0;
}
