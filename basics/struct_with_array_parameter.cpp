#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breath;
    int params[10];
};

struct Rectangle *funWithArrayInStruct() {
    struct Rectangle *r;

    r = new Rectangle;

    r->length = 200;
    r->breath = 100;
    for (int i = 0; i < 10; i++) {
        r->params[i] = i+1;
    }

    return r;
}

int main() {
    struct Rectangle *ptr = funWithArrayInStruct();

    cout << "Params " << ptr->params[2] << endl;
    return 0;
}