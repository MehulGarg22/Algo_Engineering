#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"No of Activities: ";
    cin>>n;
    cout<<endl;
    vector<vector<int>>v;
    for(int i=0; i<n; i++){
        int start, endd;
        cin>>start>>endd;
        v.push_back({start, endd});
    }
    sort(v.begin(), v.end(), [&](vector<int> &a, vector<int>&b)
    {
        return a[1]<b[1];
    });
    int take=1;
    int endd=v[0][1];
    cout<<"Activity selected are: ";
    cout<<"("<<v[0][0]<<","<<endd<<")";
    for(int j=1; j<n; j++){
        if(v[j][0]>=endd){
            take++;
            cout<<"("<<v[j][0]<<","<<v[j][1]<<")";
            endd=v[j][1];
        }
    }
    cout<<endl;
    cout<<"No of Activities selected are: "<<take<<endl;

return 0;
}
