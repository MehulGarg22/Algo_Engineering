#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
 
int main()
{
    int n;
    cout<<"enter size";
    cin>>n;
    int arr[n],i;
    cout<<"enter array";
    for(i=0;i<n;i++){
    cin>>arr[i];    
    }
 
    int min = INT_MAX, max = INT_MIN;
    for (int i: arr)
    {
        if (i < min) {
            min = i;
        }
 
        if (i > max) {
            max = i;
        }
    }
 
    cout << "The min element is " << min << endl;
    cout << "The max element is " << max << endl;
 
    return 0;
}
