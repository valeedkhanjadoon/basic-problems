#include <iostream>

using namespace std;

int main() {
    // Pointers
    // -> A pointer is a variable that stores the memory address of another variable.
    // 1. Pointers are used for accessing HEAP memory.
    // 2. Pointers are used for accessing Resources (like file on hard disk).
    // 3. Pointers are used for Parameter Passing

    int a = 10; // Data variable
    int *p; // Address variable (Declaration)
    p = &a; // Store the address of a in p (Initialization)

    // dereferencing
    cout << *p << endl; // 10 (Dereferencing)

    return 0;
}