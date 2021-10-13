#include<iostream>
#include<climits>
using namespace std;
int main()
{   int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(i=0;i<=n;i++)
    {
        if (arr[i]<minNo)
        {
            minNo=arr[i];
        }
        if(arr[i]>maxNo)
        {
            maxNo=arr[i];
        }
    }
    cout<<minNo<<" "<<maxNo<<endl;

return 0;
}
