#include <iostream>
#include <stdlib.h>

using namespace std;

/*
    If you want to use the memory in the Heap, you need to use pointers.
    We use the malloc() function to allocate memory in the Heap. (in C Language)
    We will also need to include stdlib.h for malloc() function.
*/

int main() {
    int *p;

    // This is how you do it in C Language
    p = (int *)malloc(5 * sizeof(int)); // 5 * 4 bytes = 20 bytes

    // This is how you do it in C++ Language
    p = new int[5]; // 5 * 4 bytes = 20 bytes
}