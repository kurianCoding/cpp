#include <armadillo>
#include <iostream>

using namespace std;
using namespace arma;

int main() {
	mat A = randu<mat>(4, 5);
	mat B = randu<mat>(4, 5);
	cout << A * B.t() << endl;
	std::cout << "hello";
	return 0;
}
