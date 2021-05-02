#include<iostream>
using namespace std;

linearsearch(int arr[],int n,int key)
{
    int i=0;
    while(i<=n){
        if(arr[i]==key)
        {
          return i;
        }
        i++;
    }
    return -1;
}

binarysearch(int arr[], int n, int key)
{
    int i,s,e;
    s=0;
    e=n;
    while(s<=e)
    {
        int mid;
        mid= (s+e)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e= mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter Number of Elements"<<endl;
    cin>>n;
    cout<<"Enter The Array"<<endl;
    int key,i,arr[n];
    for (i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    cout<<"Enter the number to find"<<endl;
    cin>>key;
    cout<<"Number to find through LS is: "<<linearsearch(arr,n,key)<<endl;
    cout<<"Number to find through BS is: "<<binarysearch(arr,n,key)<<endl;
    return 0;
}
