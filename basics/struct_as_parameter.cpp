#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breath;
};

// Utilizing Heap
struct Rectangle *funWithHeap() {
    struct Rectangle *p;

    p = new Rectangle;
    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    
    p->length = 15;
    p->breath = 7;

    return p;
}

void funWithAddress(struct Rectangle *r) {
    r->length = 20;
    cout << "Length " << r->length << endl << "Breath " << r->breath << endl;
}

int main() {
    // struct Rectangle r = {10, 5};
    // funWithAddress(&r);
    // cout << "Length " << r.length << endl << "Breath " << r.breath << endl;

    struct Rectangle *ptr = funWithHeap();
    cout << "Length " << ptr->length << endl << "Breath " << ptr->breath << endl;

    return 0;
}