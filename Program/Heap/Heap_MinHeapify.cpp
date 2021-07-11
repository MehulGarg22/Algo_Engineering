#include<iostream>
using namespace std;

void MinHeapify (int arr[], int n, int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;

    if(l<n && arr[l]<arr[largest]){
        largest=l;
    }
    if(r<n && arr[r]<arr[largest]){
        largest=r;
    }
    if(largest!= i){
        swap(arr[largest], arr[i]);
        MinHeapify(arr, n, largest);
    }
}

int main()
{
    int arr[]={8,6,3,10,5,4,9};

    for(int i=2; i>=0;i--){
        MinHeapify(arr, 7, i);
    }

    for(int i=0; i<7;i++){
       cout<<arr[i]<<" ";
    }
}
