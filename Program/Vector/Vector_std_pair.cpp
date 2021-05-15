#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool Compare(pair<int, int> p1, pair<int, int> p2){
    return p1.first<p2.first;
}

int main(){

int arr[]={10,16,7,14,5,3,12,9};
vector<pair<int,int>> v;
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<n;i++){
    v.push_back(make_pair(arr[i],i));
}
sort(v.begin(), v.end(), Compare);
for(int i=0;i<v.size(); i++){
    arr[v[i].second]=i;
}
for(int i=0;i<n; i++){
    cout<<arr[i]<< " ";
}cout<<endl;

return 0;
}
