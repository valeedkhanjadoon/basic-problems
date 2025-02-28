#include <iostream>

using namespace std;

int add(int a, int b) {
    int sum = 0;
    sum = a + b;
    return sum;
}

int main() {
    int x, y, z;
    x = 10;
    y = 10;
    z = add(x, y);
    cout << "Sum is " << z << endl;
    return 0;
}