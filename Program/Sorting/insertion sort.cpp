#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of Element to be stored in an array: ";
    cin>>n;
    int i;
    int arr[n];
    cout<<endl;
    cout<<"Enter Elements in an array: "<<endl;
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=1;i<=n;i++)
    {
        int current_value=arr[i];
        int j=i-1;
        while(arr[j]>current_value &&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current_value;
    }

    cout<<"Sorted array is: "<<endl;
    for (i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<endl;
    }
return 0;
}
