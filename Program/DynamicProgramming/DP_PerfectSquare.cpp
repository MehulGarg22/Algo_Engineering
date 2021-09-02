#include<iostream>
#include<vector>
using namespace std;

const int N=1e5+2, MOD=1e9;
int dp[N];

int PerfectDP(int n)
{

    if(n<=3){
        return n;
    }

    if(dp[n]!=MOD){
        return dp[n];
    }
    for(int i=1;i*i<=n; i++){
        dp[n]= min(dp[n],1+PerfectDP(n-i*i));
    }

    return dp[n];

}

int TabulePerfect(int n)
{
    vector<int> Tdp(n+1, MOD);

    Tdp[3]=3;
    Tdp[0]=0;
    Tdp[1]=1;
    Tdp[2]=2;

    for(int i=1; i<=n; i++){
        for(int j=0; i*i+j<=n; j++){
            Tdp[i*i+j]=min( Tdp[i*i+j], 1+ Tdp[j]);
        }
    }
    cout<<"Fibonacci series with Tabulation Method is: "<<Tdp[n]<<endl;
}

int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    for(int i=0; i<N; i++){
        dp[i]=MOD;
    }
    cout<<endl<<"Fibonacci series with Memoisation Method is: "<<PerfectDP(n)<<endl;;
    TabulePerfect(n);

return 0;
}

