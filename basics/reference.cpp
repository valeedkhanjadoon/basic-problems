#include <iostream>

using namespace std;

// Reference
// -> A reference is an alias to a variable.
// -> It is only avaialble in C++.
// -> Why use reference?
//    1. To avoid copying of large structures.
//    2. To avoid using pointers.
//    3. To make the code more readable.
//    4. To make the code more efficient.

int main() {
    int a = 10;
    int &r = a; // Reference variable
    
    /*
    The reference variable is just another name for the variable.
    IMPORTANT: The reference variable is not a separate memory location.
    The reference variable is not a pointer. 
    */
  
    r = 25; // Changing r will also change a because they are not different.
   
    cout << a << endl;
    cout << r << endl;

    return 0;
}