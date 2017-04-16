/*this program answeres the problem in hacker earth. it defines a thing
 * called amazing pallindromes. amazing pallindromes are structures whi
 * ch can be substrings of the given string and are subjected to compre
 * ssion: compression is the process of replacing repeating alphabets w
 * i th one alphabet. this will yeild complressed words the compressed
 * words when they are pallindromes are called to be amazing pallindromes
 * */
#include <iostream>
#include <string>
using namespace std;
bool isPallindrome(string word) {
	/* this is a program to see if the given string is a pallindrome
	 * or not*/
	for (int i = 0; i < int(word.length() / 2); i++) {
		if (word[i] != word[int(word.length()) - i - 1]) {
			return false;
		}
	}
	return true;
}
string compressString(string inputword) {
	int length = int(inputword.length());
	char output[length - 1];
	int j = 0;
	for (int w = 0; w < length; w++) {
		if (output[j] != inputword[w]) {
			output[j] = inputword[w];
			j++;
		}
	}
	return output;
}
int main() {
	string teststr;
	cin >> teststr;
	cout << compressString(teststr);
	return 0;
}
