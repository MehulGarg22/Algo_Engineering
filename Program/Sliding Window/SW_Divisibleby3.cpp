#include<iostream>
#include<vector>

using namespace std;

int divisible(int arr[], int n, int k)
{
    int sum=0; bool found=false; pair<int, int> ans;

    for(int i=0;i<k;i++){
        sum+=arr[i];
    }

    if(sum%3==0){
        ans=make_pair(0, k-1);
        found=true;
    }

    for(int j=k; j<n; j++){
        if(found){
            break;
        }
        sum=sum+arr[j]-arr[j-k];
        if(sum%3==0){
            ans=make_pair(j-k+1, j);
            found=true;
        }
    }
    if(!found){
        ans=make_pair(-1, 0);
    }
    if(ans.first==-1){
        cout<<"Sum is not divisible"<<endl;
    }
    else{
        for(int m=ans.first; m<=ans.second; m++){
            cout<<arr[m]<<" ";
        }
        cout<<endl;
    }
}

int main(){
  int arr[]={84,23,45,12,56,82};
  int k=3;

  divisible(arr, 6, k);

return 0;
}
