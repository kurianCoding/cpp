/* checking if the given set of numbers are
 * constituting a square.*/
#include <iostream>
using namespace std;
int cartLength(int a, int b, int c, int d) {
	return (a - c) * (b - d) * (a - c) * (b - d);
}
bool isPerpendicular(int a, int b, int c, int d, int e, int f, int g, int h) {
	int sl1 = (d - b) * (g - e);
	int sl2 = (h - f) * (c - a);
	return sl1 == sl2 ? true : false;
}
/* getting the side of the square.*/
class Quad {
    private:
	int x1, y1, x2, y2, x3, y3, x4, y4;

    public:
	void setVertex(int vertex, int x, int y) {
		switch (vertex) {
			case 1:
				this->x1 = x, this->y1 = y;
				break;
			case 2:
				this->x2 = x, this->y2 = y;
				break;
			case 3:
				this->x3 = x, this->y3 = y;
				break;
			case 4:
				this->x4 = x, this->y4 = y;
				break;
		}
	}
	bool isSquare() {
		int length1 =
		    cartLength(this->x1, this->y1, this->x3, this->y3);
		int length2 =
		    cartLength(this->x2, this->y2, this->x4, this->y4);
		return length1 == length2 && this->isRectange();
	}
	bool isRectange() {
		return isPerpendicular(this->x1, this->y1, this->x2, this->y2,
				       this->x3, this->y3, this->x4, this->y4);
	}
};
int main() {
	Quad qd;
	int a, b, c, d, e, f, g, h;
	cin >> a >> b >> c >> d >> e >> f >> g >> h;
	qd.setVertex(1, a, b);
	qd.setVertex(2, c, d);
	qd.setVertex(3, e, f);
	qd.setVertex(4, g, h);
	cout << (qd.isSquare() ? "true" : "false");
}
