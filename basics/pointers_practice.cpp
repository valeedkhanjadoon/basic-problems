#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;

    printf("Using Pointer %d %d \n\n", *p);

    // -------------- In case of Array ----------------
    int A[5] = {2, 4, 6, 8, 10};
    int *q;
    
    // IMPORTANT: No need to use &A[0] because A is already a pointer to the first element of the array.
    q = A;

    for (int i=0; i < 5; i++) {
        cout << q[i] << endl; // Accessing through the pointer
    }
    cout << endl;

    // ------------- Creating an array in heap -------------
    int *r;

    // For C Language
    // r = (int *)malloc(5 * sizeof(int)); // 5 * 4 bytes = 20 bytes

    // For C++ Language
    r = new int[5]; // 5 * 4 bytes = 20 bytes

    r[0] = 10;
    r[1] = 20;
    r[2] = 30;
    r[3] = 40;
    r[4] = 50;

    for (int j=0; j < 5; j++) {
        cout << r[j] << endl;
    }

    // Free the memory, when you are done with it, you have to free it.

    // For C++ Language, use the delete[] operator
    delete [] r;

    // For C Language, you use the free() function
    // free(r);

    return 0;
}