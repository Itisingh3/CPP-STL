// Topic:  std::set<T>

// syntax: std::set<T> objectName;

// 1.std::set is an Asssociative container that contains a sorted set of unique objects of type key.
// 2.It is usually implemented using Red-Black Tree.
// 3.Insertion , removal , search have logirathmic complexity.
// 4.If we want to store user defined data type in set then we will have to provide compare
//   function so that set can store them in sorted order.
// 5. we can pass the order of sorting while constructing set object.
// It store unique elements and they are sorted in sorted order (A/D)


#include<iostream>
#include<set>
#include<string>
#include<functional>
using namespace std;
class Person{
    public:
        float age;
        string name;
    bool operator < (const Person& rhs) const {return age>rhs.age;}
    bool operator < (const Person& rhs) const {return age<rhs.age;}
};
int main(){
    // set<int>set={1,2,5,4,3,2,3,4,5,3};
    // for(const auto &e:set){
    //     cout<<e<<endl;
    // }



    set<Person> set={{30,"Rupesh"},{25,"Hitesh"},{22,"John"}};
    // set<Person, std::greater> set={{30,"Rupesh"},{25,"Hitesh"},{22,"John"}};
    for(const auto &e:set){
        cout<<e.age<<" "<<e.name<<endl;
    }
    return 0;
}