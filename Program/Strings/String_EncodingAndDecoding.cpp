#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

string str;
cout<<"Message to be Encoded is: ";
getline(cin, str);

for(int i=0;i<str.length();i++)
{
    if(str[i]>='a' && str[i]<= 'z')
    {
        str[i]+=5;
    }
    else if (str[i]>='A' && str[i]<= 'Z')
    {
        str[i]+=5;
    }
}

cout<<"Encoded is:"<<" "<<str<<endl;
cout<<endl;
string str1;
cout<<"Message to be Encoded is: ";
getline(cin, str1);

for(int i=0;i<str1.length();i++)
{
    if(str1[i]>='a' && str1[i]<= 'z')
    {
        str1[i]-=5;
    }
    else if (str1[i]>='A' && str1[i]<= 'Z')
    {
        str1[i]-=5;
    }
}

cout<<"Decoded message is:"<<" "<<str1<<endl;
cout<<endl;

return 0;
}
