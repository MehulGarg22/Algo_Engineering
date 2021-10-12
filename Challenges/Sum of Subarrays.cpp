#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int maxSubArray(int m[], int n)
{

    int sum = 0, s = 0, i;

    for (i = 0; i < n; i++)
    {
        s += m[i];
        if (s < 0)
            s = 0;

        sum = max(s, sum);
    }

    sort(m, m + n);

   
    if (m[n - 1] < 0)
        sum = m[n - 1];

    return sum;
}

int main()
{
 
    

    int i, n, sum = 0;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    cout<<"enter the array";
    for (i=0;i<n;i++){
        cin>>arr[i];
    }

    
    cout << "\n The " << n << " elements of the array are : ";

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    sum = maxSubArray(arr, n);

    cout << "\nThe Maximum sum of the Subarrays of the given array is: " << sum;

    

    return 0;
}
