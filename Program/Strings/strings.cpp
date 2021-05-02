#include<iostream>
#include<string>
using namespace std;

int main()
{

string str ="Mehul is good";  // If we declare with space string in code then output will be with space
cout<<str;

string str;                 // If we input with space string from user then output will be first word of the string
cin>>str;
cout<<str<<endl;

string str;                 // Solved the problem of with Space Inputs of Strings.
getline(cin, str);
cout<<str;

// Method of Output is same but Method of Input are different for with space, without space and already defined strings

string str1(5, 'M');        // Printing 5 Times M
cout<<str1;

return 0;
}
