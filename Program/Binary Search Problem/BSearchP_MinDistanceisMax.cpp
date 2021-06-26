#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

bool isfeasible(int mid, int arr[], int k, int n)
{
    int element=1;
    int pos=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-pos>=mid){
            pos=arr[i];
            element++;
            if(element == k){
                return true;
            }
        }
    }
    return false;
}

int MinDistanceisMax(int arr[], int n, int k)
{
    sort(arr, arr+n);
    int result=-1;
    int low=arr[0];
    int high=arr[n-1];

    while(low<high){
        int mid=low+(high-low)/2;

        if(isfeasible(mid, arr, k, n)){
            result=max(result, mid);
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return result;
}

int main()
{
    int arr[]={11,2,7,5,1,12};
    int k=3;
    cout<<"Minimum Largest distance is: "<<MinDistanceisMax(arr, 6,3);

return 0;
}
