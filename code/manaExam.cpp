/* a program which counts the number of items in a room
 * and destroys x number of items, so that it will not
 * affect the ability of a person to enter the room */
#include <math.h>
#include <iostream>
using namespace std;
int findDiff(int max, int number) {
	int initialdiff;
	if (number > max) {
		initialdiff = number - max;
	} else {
		initialdiff = 0;
	}
	int maxTimes = log2(max);
	return maxTimes;
}

int main() {
	int testCases = 0;
	cin >> testCases;
	int boxCount = 0, maxItem = 0, vists = 0;
	for (int h = 0; h < testCases; h++) {
		cin >> boxCount >> maxItem >> vists;
	}
}
