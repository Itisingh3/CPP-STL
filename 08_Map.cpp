// Topic:: MAp in c++

// Note::
// 1. Syntax:  map<T1,T2> object; => where T1 is key type and T2 is value Type.
// 2. std::map is Associative container that stores elements in key value combination
//    where key should be unique, otherwise it overrides the previous value.
// 3. It is implemented using self-Balance Binary Search Tree (AVL/Red-Black).
// 4. It store key value pairs in sorted order
// 5. Std::map is used generally in Dictionary type problems.

// Exapmle :: Dictionary


#include<iostream>
#include<map>
#include<functional>
#include<vector>
using namespace std;
int main(){
    std::map<string,int>Map;
    // std::map<string,vector<int>>Map;     // Use push_back(34783) instead of "="
    // std::map<string,int,std::greater<>>Map;
    Map["One"]=4824827;
    Map["Two"]=3948237;
    Map.insert(std::make_pair("Three",3748274));

    //Loop through the map
    for(auto &e:Map){
        cout<<e.first<<" "<<e.second<<endl;
    }

    // Access using [] operator
    cout<<Map["One"]<<endl;
    return 0; 
}