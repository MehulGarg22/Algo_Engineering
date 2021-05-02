#include<iostream>
#include<climits>
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
int maxsum=INT_MIN;
    for (int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {int sum=0;
          for(int k=i;k<=j;k++)
          {
              sum+=arr[k];
          }
          maxsum=max(maxsum, sum);
        }
    }
cout<<maxsum<<endl;

return 0;
}
