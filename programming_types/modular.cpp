#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle {
    int length;
    int breath;
};

int area(struct Rectangle r) {
    return r.length * r.breath;
}

int perimeter(struct Rectangle r) {
    return 2 * (r.length + r.breath);
}


int main() {
    Rectangle r = {0, 0};

    printf("Enter Length: ");
    cin >> r.length;
    
    printf("Enter Breath: ");
    cin >> r.breath;

    int a = area(r);
    int peri = perimeter(r);

    printf("Area = %d\nPerimeter = %d\n", a, peri);

    return 0;
}