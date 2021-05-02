#include<iostream>
using namespace std;
int main()
{
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
    int pass=n;
    while(pass>=0)
    {
        for (i=0;i<=pass-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        pass--;
    }
    cout<<"Sorted array is: "<<endl;
    for (i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<endl;
    }
return 0;
}
