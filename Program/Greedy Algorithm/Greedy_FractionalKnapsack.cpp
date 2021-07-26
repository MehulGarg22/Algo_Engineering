#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int>p1, pair<int, int> p2)
{
    double v1=(double) p1.first/p1.second;
    double v2=(double) p2.first/p2.second;
    return v2<v1;
}

signed main()
{
    int n;
    cin>>n;

    vector<pair<int, int>>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end(), compare);
    int ans=0;
    int w;
    cin>>w;
    for(int j=0;j<n;j++)
    {
        if(w>=v[j].second){
            ans+=v[j].first;
            w-=v[j].second;
            continue;
        }
        double vw=(double)v[j].first/v[j].second;
        ans+=vw*w;
        w=0;
        break;
    }
    cout<<"Answer is: "<<ans;
return 0;
}
