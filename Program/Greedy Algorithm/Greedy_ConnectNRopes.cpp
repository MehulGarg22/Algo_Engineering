#include<iostream>
#include<vector>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

void connect(int arr[], int n)
{
    priority_queue<int, vector<int>, greater<int>>pq(arr, arr+n);
    int res=0;
    while(pq.size()>2){
        int first=pq.top();
        pq.pop();
        int second=pq.top();
        pq.pop();
        res+=first+second;
        pq.push(first+second);
    }
    cout<<res;
}

int main()
{
    int arr[]={3,2,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    connect(arr, n);

return 0;
}
