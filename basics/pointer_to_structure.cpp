#include <iostream>

using namespace std;

// Pointer (pointing) to Structure

struct Rectangle {
    int length;
    int breath;
};

int main() {
    Rectangle r = {10, 5};
    Rectangle *p = &r;

    cout<<p->length<<endl;
    cout<<p->breath<<endl;

    // Structure in HEAP
    Rectangle *k;
    // k = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // In C Programming Language
    k = new Rectangle; // In C++ Programming Language

    k->length = 7;
    k->breath = 15;

    cout << k->length << endl;
    cout << k->breath << endl;

    return 0;
}