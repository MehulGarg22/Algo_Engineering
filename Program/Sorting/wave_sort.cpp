#include<iostream>
using namespace std;

int swapp(int* a, int* b)
{
    int temp= *a;
    *a=*b;
    *b= temp;
}

void wavesort(int arr[], int n)
{
    int i=1;
    for(i=1;i<n ;i+=2)
    {
        if(arr[i]>arr[i-1])
            swapp(&arr[i],&arr[i-1]);

        if(arr[i]>arr[i+1])
            swapp(&arr[i],&arr[i+1]);

    }
}

int main(){
int arr[]={1,2,5,4,9,8};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<endl;
cout<<"Wave Formed is: ";
wavesort(arr, n);
for(int i=0; i<n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}
