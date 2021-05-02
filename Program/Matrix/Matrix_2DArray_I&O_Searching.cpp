#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // ----------------------------------------------------------- Input ----------------------------------------------------
    int n,m;
    cout<<"Enter Rows and Columns of the Matrix: ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter Element of Matrix";
    for (int i=0; i<n; i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    // ------------------------------------------------------ Output -------------------------------------------------------

    cout<<"Matrix formed is: ";
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // ------------------------------------------------ Searching ----------------------------------------------------------

    int X;
    cout<<endl;
    cout<<"Enter the Element to be found in Matrix: "<<endl;
    cin>>X;
    bool flag= 0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (arr[i][j]== X)
            {
                flag= 1;
                cout<<i<<" "<<j<<endl;
            }

        }
    }

    if (flag==1)
        cout<<"Element Found ";
    else
        cout<<"Element not Found";

    // --------------------------------------- Spiral Matrix Printing -------------------------------------------------------

    int row_start=0, row_end=n-1, col_start=0, col_end=m-1;
    while (row_start<=row_end && col_start<=col_end)
    {
        // First Row Print

        for (int col=col_start; col<=col_end; col++)
        {
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;
        cout<<endl;

        // Last Column Print

        for(int row=row_start; row<=row_end; row++)
        {
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;
        cout<<endl;

        // Last Row Printing

        for (int col= col_end; col>=col_start; col--)
        {
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;
        cout<<endl;

        // For First Row Prinitng

        for (int row= row_end; row>=row_start; row--)
        {
            cout<<arr[row][col_start]<<" ";
        }
        col_start++;
        cout<<endl;
    }

return 0;
}
