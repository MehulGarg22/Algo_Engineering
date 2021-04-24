#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int n1= m-l+1;
    int n2=r-m;

    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++)
    {
        a[i]= arr[l+i];
    }
    for(int j=0; j<n2; j++)
    {
        b[j]= arr[m+1+j];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
            arr[k]=a[i];
            i++;
        }

        else
        {
            arr[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=a[i];
        k++; i++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
        k++; j++;
    }
}

void mergesort(int arr[], int l, int r)
{
    if(l>=r)
    {
        return;
    }
        int m=l+(r-1)/2;

        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m, r);
}

void printArray(int A[], int size)
{
    for (int i = 0; i<size; i++)
        cout << A[i] << " ";
}


int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    cout<<"Given array is \n";
    printArray(arr, 5);
    mergesort(arr, 0, 5);
    cout << "\nSorted array is \n";
    printArray(arr, 5);
return 0;
}
