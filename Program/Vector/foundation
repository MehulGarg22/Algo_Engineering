#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    for(int i=0; i<5; i++)
    {
        v.push_back(i);
    }
    cout<<"Method 1 is: ";
    for(int i=0; i<v.size(); i++)
    {
        cout<< v[i] <<" ";
    }


    cout<<endl<<"Method 2 is: ";
    vector <int>::iterator it;
    for(it =v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }


    cout<<endl<<"Method 3 is: ";
    for(auto el:v){
        cout<<el<<" ";
    }


    v.pop_back();
    cout<<endl;
    cout<<"After Pop is: ";
    for(auto ele: v)
    {
        cout<<ele;
    }


    cout<<endl;
    vector <int> v2(3,50);
    cout<<"V2 is: ";
    for(auto ele:v2)
        cout<<ele<<" ";


    cout<<endl;
    swap(v,v2);
    cout<<"After Swap V is: ";
    for(auto ele:v)
        cout<<ele<<" ";


    cout<<endl;
    cout<<"After Swap V2 is: ";
    for(auto sec: v2)
        cout<<sec<<" ";

return 0;
}
