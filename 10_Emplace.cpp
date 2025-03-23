// Topic: Emplace in stl

// 1. All the containers supports insert and emplace operation to store data.
// 2. Emplace is used to construct object in-place and avoids unecessary copy.
// Insert and Emplace is equal for premitive data types but when we deal with heavy objects
//  we should use emplace it we can for efficiency.

#include<iostream>
#include<set>
using namespace std;
class A{
    public: int x;
    A(int x=0): x{x}{cout<<"Construct"<<endl;};
    A(const A& rhs){x=rhs.x;cout<<"Copy"<<endl;}
};
bool operator < (const A& lhs, const A& rhs){return lhs.x<rhs.x;}
int main(){
    set<A> Set;
    // Set.insert(A(1));   
    Set.emplace(2);
    return 0;
}