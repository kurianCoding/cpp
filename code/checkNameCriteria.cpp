/* this program will take a string, find the score of
 * the string by adding the values of all the characters
 * and then return the result based on a criteria. The cri
 * teria being that number of factors of the score should be
 * greater than or equal to the number of characters in the
 * name*/
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int getScore(string word) {
	transform(word.begin(), word.end(), word.begin(), tolower);
	return 0;
}
int main() {
	int tests;
	string Name;
	cin >> tests;
	for (int k = 0; k < tests; k++) {
		cin >> Name;
	}
	return 0;
}
