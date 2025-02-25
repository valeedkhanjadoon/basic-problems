#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breath;
};

int main() {
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    // IMPORTANT
    // Size of the pointer is INDEPENDANT of the datatype it points to.
    // The size of the pointer is always 8 bytes (on a 64-bit machine).

    cout << sizeof(p1) << endl; // 8 bytes
    cout << sizeof(p2) << endl; // 8 bytes
    cout << sizeof(p3) << endl; // 8 bytes
    cout << sizeof(p4) << endl; // 8 bytes
    cout << sizeof(p5) << endl; // 8 bytes

    return 0;
}