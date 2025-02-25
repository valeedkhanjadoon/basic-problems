// Problem Statement:
// Given an array like [2,4,5,1,9,7,8], sum it up but don’t include the minimum or maximum value in the final sum.
// You are not allowed to use built-in functions.

#include <iostream>

using namespace std; 
 
int main() {
	int A[7] = { 2, 4, 5, 1, 9, 7, 8 };
	int total = 0;
    int min, max = A[0];

    for (int i = 0; i < 7; i++) {
        if (A[i] < min) {
            min = A[i];
        }
        if (A[i] > max) {
            max = A[i];
        }
    }

	for (int i = 0; i < 7; i++) {
        if (max == A[i] || min == A[i]) {
            continue;
        }
		total = total + A[i];
	}

	cout << total << endl;
	return 0;
}
