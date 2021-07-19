#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> m;
    m[8] = 2;
    cout << "Value at key 8 is: " << m[8] << endl;

    return 0;
}
