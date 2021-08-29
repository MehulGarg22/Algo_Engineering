#include<iostream>
#include<vector>
using namespace std;

const int N=1e5+2;
int dp[N];

int MemoisationFib(int n)
{

    if(n==0){
        return 0;
    }
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }

    dp[n]= MemoisationFib(n-1)+ MemoisationFib(n-2);
    return dp[n];

}

int TabuleFib(int n)
{
    vector<int> Tdp(n+1);

    Tdp[0]=0;
    Tdp[1]=0;
    Tdp[2]=1;

    for(int i=3; i<=n; i++){
        Tdp[i]=Tdp[i-1]+Tdp[i-2];
    }
    cout<<"Fibonacci series with Tabulation Method is: "<<Tdp[n]<<endl;
}

int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    for(int i=0; i<N; i++){
        dp[i]=-1;
    }
    cout<<endl<<"Fibonacci series with Memoisation Method is: "<<MemoisationFib(n)<<endl;;
    TabuleFib(n);

return 0;
}
