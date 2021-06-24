#include<iostream>
using namespace std;

int RotatedArray(int arr[], int key, int left, int right){
    if(left>right){
        return -1;
    }
    int mid= (left+right)/2;

    if(arr[mid]==key){
        return mid;
    }
    if(arr[left]<=arr[right]){
        if(key<=arr[mid] && key>=arr[left]){
            return RotatedArray(arr, key, left, mid-1);
        }
        else{
            return RotatedArray(arr, key, mid+1, right);
        }
    }
    if(arr[left]>=arr[right]){
        if(key<=arr[mid] && key>=arr[left]){
            return RotatedArray(arr, key, left, mid-1);
        }
        else{
            return RotatedArray(arr, key, mid+1, right);
        }
    }
}

int main(){
    int arr[8]={6,7,8,9,10,1,2,5};
    int i=RotatedArray(arr, 8, 0, 7);
    cout<<"Answer is: "<<i<<endl;
    return 0;
}
