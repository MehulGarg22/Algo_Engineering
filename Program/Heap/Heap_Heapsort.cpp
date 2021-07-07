#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#define vi vector<int>
using namespace std;

void heapify(vector<int> &arr, int n, int i)
{
    int largest=i;  //Initialise largest with root node
    int left=2*i+1;
    int right=2*i+2;

    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }

    if(largest!=i){
        swap(arr[largest], arr[i]);
        heapify(arr,n , largest);
    }
}

int heapsort(vi &arr, int n)
{
   for(int i=(n/2)-1; i>=0; i--){
    heapify(arr, n, i);
   }

   for(int i=n-1;i>0;i--){
    swap(arr[0], arr[i]);
    heapify(arr, i, 0);
   }
}

signed main()
{
    int n;
    //Input n
    cout<<"Enter No of Elements in a Heap: ";
    cin>>n;
    cout<<endl;
    vi arr(n);

    //Input heap
    cout<<"Enter Elements in a Heap: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Sort
    heapsort(arr, n);

    cout<<endl;

    //Output heap
    cout<<"Sorted Heap is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;


return 0;
}
