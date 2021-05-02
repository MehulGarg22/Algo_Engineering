#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string st;
    cout<<"Enter String"<<endl;
    cin>>st;
    // getline(cin, st)
    cout<<endl;
    int freq[26];
    int i=0;
    for (i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(i=0;i<st.length();i++)
    {
        freq[st[i]-'a']++;
    }
    int maxfq=0;
    char ans='a';

    for(i=0;i<26;i++)
    {
        if (freq[i]>maxfq)
        {
            maxfq=freq[i];
            ans=i+'a';
        }
    }
    cout<<"Frequency of '"<<ans<<"' is: "<<maxfq<<endl;
return 0;
}
