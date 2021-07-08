#include<iostream>
using namespace std;

int main()
{
    int countt=1;
    int n;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i){
                cout<<countt<<" ";
                countt++;
            }
        }
        cout<<endl;
    }

return 0;
}


