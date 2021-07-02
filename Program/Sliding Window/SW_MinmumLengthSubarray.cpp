#include<iostream>
using namespace std;

int MinLength(int arr[], int n, int x)
{
    int sum=0; int minlength=n+1; int endd=0; int start=0;
    while(endd<n){
        while(sum<=x && endd<n){
            sum+=arr[endd];
            endd++;
        }
        while(sum>x && start<n){
            if(endd-start<minlength){
                minlength=endd-start;
            }
            sum-=arr[start];
            start++;
        }
    }
    return minlength;
}

int main()
{
    int arr[]={1,4,45,6,10,19};
    int x=51;
    cout<<"Minimum Length of a subarray is: "<<MinLength(arr, 6,51);

return 0;
}
