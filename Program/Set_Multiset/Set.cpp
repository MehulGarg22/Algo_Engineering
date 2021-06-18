#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;


int main(){
    set<int> s;

    // Insertion 
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(4);
    s.insert(5);


    // Print Elements
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i=s.begin(); i!=s.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;


    // Print Elements in Reverse
    for (auto i = s.rbegin(); i != s.rend(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;


    // Size Function
    cout<<"Size is: "<<s.size()<<endl;


    // Lower and Upper Bound
    cout << "s.lower_bound(2): "<<* s.lower_bound(2) << "\n";
    cout << "s.upper_bound(2): "<<*s.upper_bound(2) << "\n";
    // When Element is not present then function returns element which is just greater than k.
    cout << "s.lower_bound(3): "<<*s.lower_bound(3) << "\n";
    cout << "s.lower_bound(3): "<<*s.upper_bound(3) << "\n";
    cout << "s.lower_bound(5): "<<*s.upper_bound(5) << "\n";
    cout << "s.upper_bound(5): "<<*s.upper_bound(5) << "\n";


    // Erase Function
    s.erase(4);
    cout<< "Erase 4: ";
    for(auto i: s){
        cout<<i<< " ";
    } cout<<endl;
    s.erase(s.begin());
    cout << "Erase Begin: ";
    for (auto i : s)
    {
        cout << i << " ";
    }
    

    // Size is
    cout<<endl<<"Size is: "<<s.size()<<endl;

    
return 0;
}
