/* there is a truck race and each truch wants to
 * move at its maximum point. but there is a point
 * on the racetrack that is too narrow for more than
 * one truck. So that every truck will have to slow
 * down for the one just in front of it. This program
 * detects how many of the trucks moved at thier top
 * speed despite this constraint.*/
#include <iostream>
using namespace std;
int main() {
	int tests;
	cin >> tests;
	for (int i = 0; i < tests; i++) {
		int numbers, count = 0;
		cin >> numbers;
		for (int j = 0, previous = 0; j < numbers; j++) {
			int temp;
			cin >> temp;
			if (temp <= previous || j == 0) {
				previous = temp;
				count++;
			}
		}
		cout << count;
	}
	return 0;
}
