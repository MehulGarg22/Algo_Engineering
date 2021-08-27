#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

int main()
{
    map<int,int> lad;
    map<int, int> snak;

    int ladder;
    cout<<"Enter no of ladders: ";
    cin>>ladder;
    cout<<"Enter Ladder: "<<endl;
    for(int i=0; i<ladder; i++){
        int u, v;
        cin>>u>>v;
        lad[u]=v;
    }

    int snake;
    cout<<endl<<"Enter no of Snakes: ";
    cin>>snake;
    cout<<"Enter snakes: "<<endl;
    for(int i=0; i<snake; i++){
        int u, v;
        cin>>u>>v;
        snak[u]=v;
    }

    queue<int>q;
    q.push(1);
    int moves=0;
    vector<bool> vis(101, 0);
    bool found=false;
    while(!q.empty() && !found){
        int sz=q.size();
        while(sz--){
            int t=q.front();
            q.pop();
            for(int die=1; die<=6; die++){
                if(t+die==100){
                    found= true;
                }
                if(t+die<=100 and lad[t+die] and !vis[lad[t+die]]){
                    vis[lad[t+die]]=true;
                    if(lad[t+die]==100){
                        found=true;
                    }
                    q.push(lad[t+die]);
                }
                if(t+die<=100 and snak[t+die] and !vis[snak[t+die]]){
                    vis[snak[t+die]]=true;
                    if(snak[t+die]==100){
                        found=true;
                    }
                    q.push(snak[t+die]);
                }
                else if(t+die<=100 and !snak[t+die] and !lad[t+die] and !vis[t+die]){
                    vis[t+die]=true;
                    q.push(t+die);
                }
            }
        }
        moves++;
    }
    cout<<endl;
    if(found){
        cout<<"No of moves to reach 100th position is: "<<moves<<endl;
    }
    else{
        cout<<-1<<endl;
    }
return 0;
}
