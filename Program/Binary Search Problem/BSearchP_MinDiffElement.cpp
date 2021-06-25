#include<iostream>
#include<climits>
using namespace std;

void MinDifferenceElement(int arr[], int key, int n){
    int low=0;
    int high=n-1;

    while(low<=high){
        int mid= low+(high-low)/2;

        if(arr[mid]==key){
            cout<< arr[mid];
        }
        if(key<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(low>high){
        if(abs(arr[low]-key)>abs(arr[high]-key)){
            cout<<"Element with minimum Difference with key is: "<<arr[high];
        }
        else{
            cout<<"Element with minimum Difference with key is: "<<arr[low];
        }
    }
}

int main(){
    int arr[]={1,3,8,10,15};
    MinDifferenceElement(arr,12, 5);
    return 0;
}
