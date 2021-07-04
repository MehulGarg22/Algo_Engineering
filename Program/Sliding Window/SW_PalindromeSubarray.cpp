#include<iostream>
#include<math.h>
using namespace std;

bool isPalindrome(int n)
{
    int temp=n; int num=0;
    while(temp>0){
        num=num*10+temp%10;
        temp=temp/10;
    }
    if(num==n){
        return true;
    }
    return false;
}

int Palindrome(int arr[], int n, int k)
{
    int num=0;

    for(int i=0;i<k;i++){
        num=num*10+arr[i];
    }
    if(isPalindrome(num)){
        return 0;
    }

    for(int j=k; j<n; j++){
        num=(num%(int)pow(10,k-1))*10+arr[j];
        if(isPalindrome(num)){
            return j-k+1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={2,3,5,1,1,5};
    int k=4;
    int ans=Palindrome(arr, 6, k);
    if(ans==-1){
      cout<<"There is no Subarray"<<endl;
    }
    else{
        cout<<"Subarray is: ";
        for(int i=ans; i<ans+k; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
