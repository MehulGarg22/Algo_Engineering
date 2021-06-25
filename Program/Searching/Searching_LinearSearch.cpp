#include<iostream>
using namespace std;

void LinearSearch (int arr[], int key, int n){

   for(int i=0; i<n; i++){
    if(arr[i]==key){
        cout<<"Element is at: "<<i+1<<endl;
        return;
    }
   }
   cout<<"Element not Found";
}
int main(){
    int arr[]={1,2,4,89,15};
    LinearSearch(arr, 4, 5);
    LinearSearch(arr, 90, 5);
return 0;
}
