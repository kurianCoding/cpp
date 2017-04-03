#include <string.h>
#include <iostream>
using namespace std;
int getPoints(int array[], int length, int strength, bool countFlag) {
	int sum = 0, count = 0;
	for (int j = 0; j < length; j++) {
		if (strength >= array[j]) {
			sum = sum + array[j];
			count++;
		}
	}
	if (countFlag) {
		return count;
	}
	return sum;
}
int main() {
	int j, sol, rounds, count;
	cin >> sol;
	int power[sol];
	for (j = 0; j < sol; j++) {
		cin >> power[j];
	}
	cin >> rounds;
	int currentStrength = 0, points = 0;
	for (j = 0; j < rounds; j++) {
		cin >> currentStrength;
		points = getPoints(power, sol, currentStrength, false);
		count = getPoints(power, sol, currentStrength, true);
		cout << count << " " << points << endl;
	}
	return 0;
}
