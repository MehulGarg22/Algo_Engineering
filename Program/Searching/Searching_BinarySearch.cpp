#include<iostream>
#include<climits>
using namespace std;

void Binary_Search(int arr[], int key, int n){
    int low=0;
    int high=n-1;

    while(low<=high){
        int mid= low+(high-low)/2;

        if(arr[mid]==key){
            cout<<"Element is present at: "<<mid;
            return;
        }
        if(key<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(low>high){
        cout<<"Element Not Found";
    }
}

int main(){
    int arr[]={1,3,8,10,15};
    Binary_Search(arr,10, 5);
    return 0;
}
