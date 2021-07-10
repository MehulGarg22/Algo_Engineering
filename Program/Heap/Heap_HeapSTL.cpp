#include<iostream>
#include<queue>
using namespace std;

int main()
{
    cout<<"Max Heap STL: ";
    priority_queue<int, vector<int>> pq;

    pq.push(2);
    pq.push(3);
    pq.push(1);

    cout<<pq.top()<<endl;

    pq.pop();

    cout<<"Max Heap STL: "<<pq.top()<<endl<<endl;

    cout<<"Min Heap STL: ";
    priority_queue<int, vector<int>, greater<int>> pqmin;

    pqmin.push(2);
    pqmin.push(3);
    pqmin.push(1);

    cout<<pqmin.top()<<endl;

    pqmin.pop();

    cout<<"Min Heap STL: "<<pqmin.top()<<endl;

return 0;
}
