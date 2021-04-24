#include<iostream>
using namespace std;

int swapp(int* a, int* b)
{
    int temp= *a;
    *a=*b;
    *b= temp;
}

void DNF_sort(int arr[], int n)
{
    int low=0, mid=0, high=n-1;

    while (mid<=high)
    {
        if(arr[mid]==0)
        {
            swapp(&arr[low], &arr[mid]);
            mid++; low++;
        }
        else if (arr[mid]==1)
            mid++;
        else{
            swapp(&arr[mid], &arr[high]);
            high--;
        }
    }
}

int main(){
int arr[]={1,0,2,1,0,1,2,1,2};
int n=sizeof(arr)/sizeof(arr[0]);
DNF_sort(arr, n);
for(int i=0; i<n; i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}
