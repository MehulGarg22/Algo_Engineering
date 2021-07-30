#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int main()
{
    int testcase;
    cout<<"Enter number of testcases: ";
    cin>>testcase;

    while(testcase--){
        int Stops, P,l;
        cout<<endl<<"Enter number of Stops, Petrol, Length: ";
        cin>>Stops>>P>>l;
        vector<pair<int, int>>v(Stops);
        cout<<endl<<"Enter distance of Stops from town: "<<endl;
        for (int i=0;i< Stops; i++){
            cin>>v[i].first>>v[i].second;
        }
        for(int i=0;i<Stops; i++){
            v[i].first=l-v[i].first;
        }
        int curr=P;
        int ans=0;
        sort(v.begin(), v.end());
        bool flag=0;
        priority_queue<int, vector<int>>pq;
        for(int i=0; i<Stops; i++){
            if(curr>=l){
                break;
            }
            if(curr<v[i].first){
                if(pq.empty()){
                    flag=1;
                    break;
                }
                curr=curr+pq.top();
                pq.pop();
                ans++;
            }
            if(flag==1){
                break;
            }
            pq.push(v[i].second);
        }
        if(flag==1){
            cout<<"-1"<<endl;
            continue;
        }
        while(!pq.empty() && curr<l){
            curr+=pq.top();
            pq.pop();
            ans++;
        }
        if(curr<l){
            cout<<"-1"<<endl;
            continue;
        }
        cout<<endl<<"Minimum Stops is/are: "<<ans<<endl;
    }

return 0;
}
