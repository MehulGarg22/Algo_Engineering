#include<iostream>
#include<climits>
using namespace std;
int main()
{

    int n;
    cout<<"Enter Number of Elements to be stored in an array: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter the Elements: "<<endl;
    int arr[n];
    int i;
    for(i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(i=0;i<=n;i++)
    {
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);

  /*  or use this
      if (arr[i]<minNo)
        {
            minNo=arr[i];
        }
        if(arr[i]>maxNo)
        {
            maxNo=arr[i];
        }*/
    }
    cout<<endl;
    cout<<"Minimum Number is: "<<minNo<<endl;
    cout<<"Maximum Number is: "<<maxNo<<endl;

return 0;
}
