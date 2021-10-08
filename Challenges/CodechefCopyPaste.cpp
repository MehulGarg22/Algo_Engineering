/* Codechef Problem Link https://www.codechef.com/problems/RRCOPY */
/* We have a copy paste software in this problem, We also had an important array sequence  */
/* While testing the software we forgot to backup the array sequence and ended up overwri- */
/* -ting the initial array. Here we can do one thing, to retrienve the last remnants of t- */
/* -he initial array, we need to find the minimum array, that could after a copy paste se- */
/* -quence lead to the modified array.                                                     */
/* -------------------------------------SOLUTION------------------------------------------ */
/* The approach is quite simple, we just need to think that all the repeated paste sequences
   are a result of copying from the original array. So if we need to get the minimum array we
   can simply remove all the paste occurences from the modded array. we do the same in the un-
   -derlying code                                                                          */

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,t,elm;
    vector<int> v,i;
    cin >> t; // number of test cases
    while (t--)
    {
       cin >> N; // size of the sequence
       for(int i=0;i<N;i++) // populating the vector
        {
            cin >> elm;
            v.push_back(elm);
        }
    sort(v.begin(), v.end()); // sorting the vector for std::unique to work
    vector<int>::iterator ip;
    ip = std::unique(v.begin(), v.begin() + N); // remove all consecutive repeated entries
    v.resize(std::distance(v.begin(), ip)); // remove the undefined positions resulted from unique
    cout << v.size()<<endl; // size of the final array
    v.clear();
    N=0; // clear the variables for next test case
    }
    return 0;
}
// contributed by Sameer
