#include<bits/stdc++.h>
using namespace std;

int sum(int num)
{
    int i;
    int sum=0;
    for(i=0;i<=num;i++)
    {
        sum+=i;
    }
  cout<<sum;
}

int main()
{

    int n;
    cout<<"Enter the Natural Number to be sum: "<<endl;
    cin>>n;
    cout<<"The Sum is: "<<endl;
    sum(n);

return 0;
}
