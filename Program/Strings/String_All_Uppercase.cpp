#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

string str;
cin>>str;
for(int i=0;i<str.length();i++)
{
    while (str[i]>='a' && str[i]<= 'z')
    {
        str[i]-=32;
    }
}
cout<<"Uppercase Values:"<<" "<<str<<endl<<endl;
for (int i=0;i<str.length();i++ )
{
    while (str[i]>='A' && str[i]<='Z')
    {
        str[i] +=32;
    }
}
cout<<"Lowercase Values:"<<" "<<str<<endl;

// Using Functions



string s;
cin>>s;
string t=s;

transform (s.begin(), s.end(), s.begin(), :: toupper);
cout<<"Uppercase: "<< " "<<s<<endl;

transform (t.begin(), t.end(), t.begin(), :: tolower);
cout<<"Uppercase: "<< " "<<t<<endl;

return 0;
}
