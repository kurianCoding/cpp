/* this is a simple exponential function, starts with a
 * principal amount. for each iteration some amount is
 * added to this principal amount and then doubled. the
 * goal is to reach the desired value with the minimum
 * addition.*/
#include <iostream>
using namespace std;
int countItr(int value) {
	int count = 1, rem = 0, precur = 0;
	rem = value;
	while (rem / 2 > 0) {
		precur = rem / 2;
		rem = rem - precur;
		if (rem % 2 != 1) {
			rem = rem - 1;
			count++;
		}
	}

	return count;
}
int main() {
	int testcases;
	cin >> testcases;
	for (int k = 0; k < testcases; k++) {
		int price = 0;
		cin >> price;
		cout << countItr(price) << endl;
	}
	return 0;
}
