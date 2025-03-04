#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breath;
};

void fun(struct Rectangle r) {
    cout << "Lenth " << r.length << endl;
    cout << "Breath" << r.breath << endl;
}

void funWithAddress(struct Rectangle *r) {
    cout << "Length " << r->length << endl;
}

int main() {
    struct Rectangle r = {10, 5};
    // fun(r);
    funWithAddress(&r);

    cout << "Length " << r.length << endl;
    cout << "Breath " << r.breath << endl;

    return 0;
}