/* a small program to
 * */
#include <iostream>
bool isPrime(int k, int* array, int j) {
	for (int u = 0; u < j; u++) {
		if (array[k] != 0) {
			if (array[u] % k == 0) {
				return false;
			} else {
				if (u == j) {
					return true;
				}
			}
		}
	}
}
int main() {
	int primeNumbers[10];
	int k = 0, j = 0;
	while (k < 10) {
		if (isPrime(k, primeNumbers, j)) {
			primeNumbers[j] = k;
			j++;
		}
		k++;
	}
	for (int i = 0; i < 10; i++) {
		std::cout << primeNumbers[i] << std::endl;
	}
	return 0;
}
