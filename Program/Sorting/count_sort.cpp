#include<iostream>
using namespace std;

void count_sort(int arr[], int n)
{
    int i;
    int k=arr[0];
    for(i=0;i<n; i++)
        k=max(k, arr[i]);

    int countarray[10]={0};
    for(i=0; i<n; i++)
        countarray[arr[i]]++;

    for(i=1;i<=k;i++)
        countarray[i]+= countarray[i-1];

    int output[n];

    for(i=n-1; i>=0; i--)
        output[--countarray[arr[i]]]=arr[i];

    for(i=0; i<n; i++)
        cout<<output[i]<<" ";

}

int main(){
  int arr[]={1,3,2,3,0,1,6,4,3,0};
  count_sort(arr, 10);

return 0;
}
