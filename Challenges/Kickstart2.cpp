#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of Test cases x: ";
    cin>>n;
    int i;
    int mx=-199999;
    int arr[n];
    arr[n]=-1;
    cout<<endl;
    cout<<"Enter Elements in an array: "<<endl;
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    for (i=0;i<n;i++){
      if (n<=1)
      {
          cout<<"Not Possible";
          return 0;
      }
      if(arr[i]>mx && arr[i]>arr[i+1])
      {
          ans++;
      }
      mx=max(arr[i],mx);

    }


    cout<<"Record Breaking day is: "<<ans<<endl;

return 0;
}
