// Topic : std:array

// Syntax: std::array<T,N> array;

// Notice:
// 1. std:array is a container that encapsulates fixed size arrays.
// 2. ArryaSize is needed at compile time
// 3. Assing by value is actually by value. => when this declaration of array is passed
//    to the function then call by value is done.
// 4. Acess elemtns:
// a. at()
// b. []
// c. front()
// d. back()
// e. data() =>give acess to the underlying array i.e it gives pointer of the array.


#include<iostream>
#include<array>
using namespace std;
int main(){
    // Declare
    std::array<int,5>myArray;

    // Intailization
    std::array<int,5>myArray2={1,2,3,4,5};
    std::array<int,5>myArray3 {1,2,3,4,5};
    
    //Assing using intailizer list
    std::array<int,5>myArray4;
    myArray4={1,2,3,4,5};

    return 0;

}