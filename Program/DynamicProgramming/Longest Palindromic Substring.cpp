#include<bits/stdc++.h>
using namespace std;
string longestPalindrome(string s) {
        vector<vector<int>>m(s.size(),vector<int>(s.size(),0));
        int i,j,long_len_pal=1,first_index=0,last_index=0;//string long_pal;
        for(int d=0;d<s.size();d++){
            i=0;j=i+d;
            while(j<s.size()){
                if(d==0){
                    m[i][j]=1;
                }
                else if(s[i]==s[j]){
                    if(m[i+1][j-1]>0 || d==1){
                        m[i][j]=d+1;
                        if(m[i][j]>long_len_pal){
                            long_len_pal=m[i][j];first_index=i;last_index=j;
                        }
                    }
                }
                i++;j++;
            }
        }

        return s.substr(first_index,(last_index-first_index+1));
    }
    int main()
    {
        string s;
        cout<<"Input the string : ";
        cin>>s;
        string longPal=longestPalindrome(s);
        cout<<"\nThe longest palindrome is "<<longPal;
    }
