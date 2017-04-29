/* this is a program to chaeck if two line segments
 * represented by 4 points intersect or not
 */
#include <iostream>
using namespace std;
struct Segment {
	int originx, originy;
	int endx, endy;
};
/*this function checks if the angle is clockwise or counter clockwise
 * */
bool doIntersect(Segment* a, Segment* b) {
	int angle = (a->originx - a->endx) * (b->originy - b->endy) /
		    ((a->originy - a->endy) * (b->originx - b->endx));
	return angle > 0;

	int main() {
		cout << "hello";
		return 0;
	}
