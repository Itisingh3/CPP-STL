// Topic: Vector

// Notes:
// 1. std::vector is a sequence container and also known as Dynamic Array or ArrayList.
// 2. Its size can grow and shrink dynamically, and no need to provide size at compile time.

// Element Access
// at(), [], front(), back(), data()

// Modifiers:
// insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()
// capacity => number of boxes which depend on your creation.
// size => no. of live elements

 #include<iostream>
 #include<vector>
using namespace std;
int main(){
    // Declarations
    std::vector<int>arr1;
    std::vector<int>arr2 (5,20);   //5=>size and 20=> element placed on all five sizes.
    std::vector<int> arr3={1,2,3,4,5}; //intialize list
    std::vector<int> arr4 {1,2,3,4,5};  //uniform intialization


    // Aceessing elements
    arr2[3]=10 ;      //in case position 3 is not available then garbage value is retured.
    arr2.at(3)=10;      //it will return array out of bound exception.
}