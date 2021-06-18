#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;

    // Insertion
    s.insert(1);
    s.insert(5);
    s.insert(2);
    s.insert(4);
    s.insert(3);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    s.erase(4);
    cout << "Erase 4: ";
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    s.erase(s.begin());
    cout << "Erase Begin: ";
    for (auto i : s)
    {
        cout << i << " ";
    }

return 0;
}