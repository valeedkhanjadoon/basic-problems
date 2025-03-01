#include <iostream>

using namespace std;

// Call by value
void swapByValue(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

// Call by address
void swapByAddress(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// In C++, reference is nickname of a variable, so it should directly represent that variable.
void swapByReference(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    a = 10;
    b = 10;
    cout << "Before: " << a << " " << b << endl;
    
    swapByValue(a, b);
    swapByAddress(&a, &b);
    swapByReference(a, b);
    
    cout << "After: " << a << " " << b << endl;

    return 0;
}