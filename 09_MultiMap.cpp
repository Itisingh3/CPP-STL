// Topic: MultiMap in c++
// Syntax: multimap<T1,T2>obj; //where T1 is key type and T2 is value type.

// Notes:
// 1. Multimap is Associative container that contains a sorted list of key value pairs,
//    while permitting multiple entries with the same key.
// 2. It store key value pair in sorted on the basis of key(ascending/descending).
//    Syntax: std::multimap<char,int,std::greater<>> MultiMap;
// 3. Data structure used in multimap is not defined by standard , but red-black tree is assumed by most of the people.
// 4. Lookup: count, find, contains, equal_range, lower_bound, upper_bound.
// 5. We don't have at() and [] functions to get element like we had in std::map.

#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    std::multimap<char,int> Multimap;
    Multimap.insert(make_pair('a',1));
    Multimap.insert(make_pair('a',2));
    Multimap.insert(make_pair('a',3));
    Multimap.insert(make_pair('b',1));
    Multimap.insert(make_pair('b',2));

    // Iterate over multimap
    for(auto & e:Multimap){
        // cout<<e.first<<" "<<e.second<<endl;
    }
    cout<<endl;


    // Get all the pairs of given key
    auto range = Multimap.equal_range('a');
    for(auto it = range.first ; it!= range.second;it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}