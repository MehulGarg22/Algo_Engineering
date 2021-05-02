#include<iostream>
using namespace std;
int main(){

int i=0,n;
cout<<"Enter the Number to Check Prime Number: ";
cin>> n;

for ( i = 2; i < n;)
{

    if (n%i==0)
    {
        cout << "Not Prime Number"<<endl;
        break;
    }

    i++;
}

    if(i==n){
        cout<<"Prime Number"<<endl;
    }

    return 0;
}
