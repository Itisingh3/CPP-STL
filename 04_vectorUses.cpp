// Topic : Best way to use vector in c++.

// Problem in vector?
/*
Vector is a combination of array(accessing) and linkedlist(dynamic). 
So, vector isze is doubled the current size on demand.
So, in order to double the size of vector after every particular demand the compiler takes 
time to procees the size which is actaully problematic.
Hence use reserve() to make your vector size fix till the particular value and hence during 
loops it will only make it double size after a particular time.
*/


#include<iostream>
#include<vector>
using namespace std;
 int main(){
    vector<int>vec;
    // for(int i=0;i<32;i++){
    //     vec.push_back(i);
    //     cout<<"Size: "<<vec.size()<<" Capacity:"<<vec.capacity()<<endl;
    // }



    vec.reserve(32);
    for(int i=0;i<32;i++){
            vec.push_back(i);
            cout<<"Size: "<<vec.size()<<" Capacity:"<<vec.capacity()<<endl;
        }
    return 0;
 }