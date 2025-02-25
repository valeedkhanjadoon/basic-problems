#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
	int A[5];
	A[0] = 2;

	
	// For each Loop
	for (int x : A) {
		cout << x << endl;
	}

	return 0;
}