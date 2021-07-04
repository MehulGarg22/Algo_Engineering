#include<iostream>
#include<math.h>
using namespace std;

int maxSum(int arr[], int n, int k)
{
    int sum=0;
    int res=0;
    for(int i=0; i<k; i++){
        sum+=arr[i];
    }
    res=max(sum, res);

    for(int j=k; j<n;j++){
        sum+=arr[j]-arr[j-k];
        res=max(res, sum);
    }
    return res;
}

bool isPerfect(int n)
{
    int sum=1;

    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            if(n==i*i){
                sum+=i;
            }
            else{
                sum+=i+n/i;
            }
        }
    }

    if(sum==n && n!=1){
        return true;
    }
    return false;
}

int PerfectNumber(int arr[], int n, int k)
{
    for(int i=0; i<n ;i++){
        if(isPerfect(arr[i])){
            arr[i]=1;
        }
        else{
            arr[i]=0;
        }
    }

    return maxSum(arr, n, k);
}

int main()
{
    int arr[]={28, 2, 3, 6, 496, 99, 8128, 24};
    int n=8;
    int k=4;

    cout<<PerfectNumber(arr, n, k);

return 0;
}
