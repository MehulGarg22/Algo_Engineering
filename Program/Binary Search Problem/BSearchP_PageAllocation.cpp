#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

bool isfeasible(int mid, int n, int m, int arr[])
{
    int studentRequired=1;
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;
        }
        if(sum+arr[i]>mid){
            studentRequired++;
            sum=arr[i];
            if(studentRequired>m)
                return false;
        }
        else{
            sum+=arr[i];
        }
    }
    return true;
}

int PageAllocation(int arr[], int n, int m)
{
    int result=INT_MAX;
    int low=arr[0];
    int sum=0;
    if(n<m){
        return -1;
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int high=sum;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(isfeasible(mid,n,m, arr)){
            result=min(result, mid);
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return result;
}

int main()
{
    int arr[]={12,34,67,90};
    int n=4;
    int m=2;
    cout<<"Minimum no of pages is: "<<PageAllocation(arr, 4,2);

return 0;
}

