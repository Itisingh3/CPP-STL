// Topic: std::multiset<T>

// syntax: std::multiset<T> objectName;

// 1. std::multiset is an Asssociative Container that contains a sorted set of duplicate objects of type key.
// 2. It is usually implemented using Red-Black Tree.
// 3. Insertion , Removal, Search have logirathmic complexity.
// 4. If we want to store user defined data type in multiset then we will have to provide
//    compare function so that multiset can store them in sorted order.
// 5. We can pass the order of sorting while constructing set object.

// Bottom Line:
// Multiset is similar to set except it can have multiple elements with same value

#include<iostream>
#include<set>
#include<string>
#include<functional>
using namespace std;



// int main(){
//     std::multiset<int> multiset={5,4,2,3,2,5};
//     for(const auto &e:multiset){
//         cout<<e<<endl;
//     }
// }




// Example: userdefined
class Person{
    public:
    float age;
    string name;
    bool operator   > (const Person &e) const {return age>e.age;}
    bool operator   < (const Person &e) const {return age<e.age;}
};
int main(){
    // std::multiset<Person,std::greater<>> multiset={{25,"Rupesh"},{22,"Hitesh"}};
    std::multiset<Person,std::less<>> multiset={{25,"Rupesh"},{22,"Hitesh"}};
    for(const auto &e:multiset){
        cout<<e.age<<" "<<e.name<<endl;
    }
    return 0;
}
