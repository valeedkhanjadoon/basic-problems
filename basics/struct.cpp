#include <iostream>
#include <stdio.h>

using namespace std;

// Structures
// -> The size of a structure is the amount of memory consumed by it's members.

struct Rectangle {
	int length;
	int breath;
};

int main() {
	// Declaration
	struct Rectangle r = {11, 15};
	// r.length = 15;
	// r.breath = 10;
	
    cout << r.length * r.breath << endl;
}