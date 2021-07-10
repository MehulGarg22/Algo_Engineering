#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Number of Elements in an Array";
    cin>>n;
    int arr[n];
    int maxi= INT_MIN;
    cout<<"Enter Elements of array";
    for (int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=0 ;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            int sum=0;
            for (int k=i;k<=j;k++)
            {
                sum=sum+arr[k];
            }
            maxi=max(maxi,sum);
        }

    }
    cout<<maxi<<endl;

return 0;
}
