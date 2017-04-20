/* A locker when opened and then closed, regenrates
 * half of the earlier contents. given that there are
 * n such lockers how will one use the given info
 * to find the maximum points we can get from the given
 * set of lockers.*/
#include <iostream>
using namespace std;
int maximum(int* array, int arraysize) {
	int temp = 0, index = 0;
	for (int l = 0; l < arraysize; l++) {
		if (array[l] > temp) {
			index = l;
			temp = array[l];
		}
	}
	return index;
}
int main() {
	int tests = 0, iterations = 0, lockers = 0;
	cin >> tests;
	for (int h = 0; h < tests; h++) {
		cin >> lockers >> iterations;
		int box[lockers];
		int max = 0, maxindex = 0;
		for (int j = 0; j < lockers; j++) {
			cin >> box[j];
		}

		int count = 0;
		for (int k = 0; k < iterations; k++) {
			maxindex = maximum(box, lockers);
			max = box[maxindex];
			count = count + max;
			box[maxindex] = box[maxindex] / 2;
		}
		cout << count << endl;
	}
	return 0;
}
