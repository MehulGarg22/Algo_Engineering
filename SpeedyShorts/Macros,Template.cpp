#include<iostream>
#include<bits/stdc++.h> //IMPORTANT
using namespace std;

#define ll long long int
#define ff first
#define st(x) cout<< #x<<": ";
#define deb(x) cout << #x << " " << x << endl;
#define ss second
#define pa pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a; i<b; i++)

int main(){
  int n;
  cin>>n;
  vi arr(n);
  st(Enter Elements of arrray)
  rep(i, 0, n){
      cin>>arr[i];
  }

  st(Inputted Elements are);
  rep(i, 0, 5){
      cout<<arr[i]<<" ";
  }


return 0;
}