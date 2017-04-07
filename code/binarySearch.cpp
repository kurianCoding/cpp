/* this is a program to demonstarte the working
 * of binary search. It will take in a sorted a
 * rray and take n queries. for each of the
 * queries it will return the number of steps
 * it required to arrive at the index and the ind
 * ex.*/
#include <string.h>
#include <iostream>
using namespace std;
/* this function performs the binary search*/
int binarySearch(int array[], int key, int lo, int high) {
	int mid = lo + (high - lo) / 2;
	if (high - lo <= 1) {
		if (key == array[lo]) {
			return lo + 1;
		} else {
			if (key == array[high]) {
				return high + 1;
			}
			return -1;
		}
	}
	if (key == array[mid]) {
		return mid + 1;
	}
	if (key < array[mid]) {
		high = mid - 1;
		return binarySearch(array, key, lo, high);
	}
	if (key > array[mid]) {
		lo = mid + 1;
		return binarySearch(array, key, lo, high);
	}
	return -1;
}
/* search function is an abstraction which decides which search
 * to call based on the length of data */
int search(int* inarray, int x, int length) {
	return binarySearch(inarray, x, 0, length);
}
int main() {
	int array[] = {1, 2, 3, 4, 5, 6, 9};
	cout << search(array, 1, sizeof(array) / sizeof(array[0])) << endl;
	cout << search(array, 9, sizeof(array) / sizeof(array[0])) << endl;
	cout << search(array, 8, sizeof(array) / sizeof(array[0])) << endl;
	return 0;
}
