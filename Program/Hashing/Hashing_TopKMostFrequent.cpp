#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<map>
using namespace std;

void KMost(int arr[], int n, int k)
{
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    vector<int> v[n+1];
    for(auto i: mp){
        v[i.second].push_back(i.first);
    }
    int countt=0;
    for(int i=n; i>=0; i--){
        for(int x: v[i]){
            cout<<x<<" ";
            countt++;
            if(countt==k){
                return;
            }
        }
    }
}

int main()
{
    int arr[] = { 3, 1, 6, 4, 4, 5, 6, 6, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    cout<<"K most frequent elements are: ";
    KMost(arr, n, k);
    cout<<endl;

return 0;
}
