#include<iostream>
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

    for (int i=0;i<n;i++)
    {int sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j];
            cout<<"Sum is: ";
            cout<<sum<<endl;
        }
    }

return 0;
}
