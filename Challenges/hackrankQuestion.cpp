#include <bits/stdc++.h>
using namespace std;
// Complete the aVeryBigSum function below.
long sumi(long arr[], int n)
{
 long sum=0;
 for(int i=0; i<n; i++)
 {
     sum+=arr[i];
 cout<<sum<<endl;
 }

}

int main()
{
    int n;
    cin>>n;
    long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sumi(arr,n);
    return 0;
}
