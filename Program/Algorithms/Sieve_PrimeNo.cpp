#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
using namespace std;

void MiniMax(long long arr[])
{
int i;
int j=0;
int128_t  MaxSum= INT_MIN;
int128_t MinSum=INT_MAX;
for (i=0; i<5 ;i++)
{
    int128_t sum=0;
    for(j=0; j<5; j++)
    {
        if(j != i)
        {
            sum +=arr[j];
        }
    }
    MaxSum= max(sum, MaxSum);
    MinSum=min(MinSum, sum);
}

cout<<MinSum<<" "<<MaxSum<<endl;
}


int main()
{
    int128_t arr[5];
    for(int i=0;i<5;i++)
    {
      cin>>arr[i];
    }
    MiniMax(arr);
    return 0;
}
