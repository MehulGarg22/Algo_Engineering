#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=1; i<=n;i++)
    {
        cin>>arr[i];
    }
    for (int i=1; i<=n; i++)
    {
        if (arr[i]>=38)
        {
            int round = ((arr[i] + 4)/5) * 5;
            int diff=round-arr[i];
            cout<<diff<<"differ"<<endl;
            if (diff<3)
            {
                arr[i]=round;
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
