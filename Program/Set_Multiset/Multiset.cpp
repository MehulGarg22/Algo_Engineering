#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){
    multiset<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(7);
    s.insert(7);
    s.insert(8);

    for(auto i: s){
        cout<<i<<" ";
    }
    cout<<endl;

    s.erase(3);
    for(auto i: s){
        cout<<i<<" ";
    }
    cout<<endl;
    
    s.erase(s.find(7));
    for (auto i : s)
    {
        cout << i << " ";
    }

return 0;
}