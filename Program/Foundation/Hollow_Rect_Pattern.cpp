#include<iostream>
using namespace std;
int main(){
int row, col;
int i,j;
cin>>row>>col;
for (i=0;i<=row;i++){
    for(j=0;j<=col;j++)
    {
        if (i==0 || i==row){
            cout<<"*";
        }
        else if(j==0 || j==col){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
return 0;

}
