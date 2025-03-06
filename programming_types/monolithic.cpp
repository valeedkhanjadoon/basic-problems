#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int length = 0, breath = 0;

    printf("Enter Length: ");
    cin >> length;
    
    printf("Enter Breath: ");
    cin >> breath;

    int area = length * breath;
    int peri = 2 * (length + breath);

    printf("Area = %d\nPerimeter = %d\n", area, peri);

    return 0;
}