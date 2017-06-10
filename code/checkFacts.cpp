/* this program is based on benfords law */
/* if a given text has numbers in it then */
/* the number of such numbers should follow */
/* a certain pattern, like the number 1 should */
/* repeat 30% the number 2 should repeat 20% */
/* of the time and so on */

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	int temp = 0, latest = 10, index = 0;
	int count[10], numbers[10];
	/* intializing arrays to zeros */
	fill_n(count, 10, 0);
	fill_n(numbers, 10, 0);
	while (cin >> temp) {
		/* if input is a number */
		if (!cin.fail()) {
			if (find(begin(numbers), end(numbers), temp) !=
			    end(numbers)) {
				index =
				    *find(begin(numbers), end(numbers), temp);
				count[index] = count[index] + 1;
			} else {
				if (latest < 10) {
					numbers[latest] = temp;
					count[latest] = count[latest] + 1;
					latest++;
				}
			}
		}
	}
	int j = 0;
	while (j < 10)

	{
		cout << count[j] << ":" << numbers[j] << endl;
		j++;
	}
	return 0;
}
