#include <iostream>

using namespace std;

// Arrays are ALWAYS pass by address.
// Array is never passed directly, the address of array is always passed into the parameter.
// Whether it's C or C++

// void fun(int A[ ], int n) { // The star or square bracket both are pointers
void fun(int *A, int n) {
    // This will print the size of the pointer which is 8 bytes, divided by size of int 4
    // cout << "Size of Array: " << sizeof(A)/sizeof(int) <<endl;

    // You cannot use For Each loop for a pointer, you will have to use the standard loop
    for (int i=0; i < n; i++) {
        cout << "fun: " << A[i] << endl;
    }

    // As this is a Call by Address, utilizing pointers. The A variable array in main() will change as well.
    A[0] = 15;
}

int main()
{
    int A[ ] = {2, 4, 6, 8, 10};
    int n = 5;

    fun(A, n);

    for (int x : A)
    {
        cout << x << endl;
    }

    return 0;
}