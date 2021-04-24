#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swa(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partitions(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = (l - 1);

    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swa(&arr[i], &arr[j]);
        }
    }
    swa(&arr[i + 1], &arr[r]);
    return (i + 1);
}

void quicksort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partitions(arr, l, r);

        quicksort(arr, l, pi - 1);
        quicksort(arr, pi + 1, r);
    }
}

int main()
{
    int n;
    cout<<"Number of Elements: "<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < 5; i++)
    {
        cin>> arr[i];
    }

    quicksort(arr, 0, 4);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
