#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }

    return arr[n-1]>=arr[n-2] && sorted(arr,n-1);
}

void dec(int n)
{
    if (n==0)
    {
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}

void inc(int n)
{
    if (n==0)
    {
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}

void first (int arr[], int n, int key, int i)
{
    if(n==i)
    {
        cout<<"Element is not available in an Array" <<endl;
    }
    if (arr[i]==key)
    {

        cout<<"Element is at: "<<i+1<<endl;
    }
    else{
        first(arr, n, key, i+1);
    }
}
int last (int arr[], int n, int key, int i)
{
    if(i==n)
    {
        return -1;
    }
    int restarray= last(arr, n, key, i+1);
    if (restarray!=-1)
    {
        return restarray;
    }
    if(arr[i]== key)
    {
        cout<< "Number from Last: "<< i<<endl;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter Number of Elements: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Element of an Array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    if (sorted(arr, n))
    {
        cout<<"Yes, Elements are Sorted"<<endl;;
    }
    else{
        cout<<"No, Elements are not Sorted"<<endl;
    }


    int i=0;
    int p;
    cin>>p;
    cout<<"Decreasing Order is: "<<endl;
    dec(p);
    cout<<endl;
    cout<<"Increasing Order is: "<<endl;
    inc(p);


    int key;
    cout<<"Element to be Found: "<<endl;
    cin>>key;
    first(arr, n, key, i);
    cout<<endl;
    last(arr, n, key, i);

return 0;
}
