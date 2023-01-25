#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a = 1, b = 0, c = 0;
	cin >> a >> b >> c;
	double D = b * b - 4 * a * c;
	if (a != 0 && D > 0) {
		double x = 0, y = 0;
		x = (-b + sqrt(D)) / (2 * a);
		y = (-b - sqrt(D)) / (2 * a);
		cout << y << " " << x << endl;
		return 0;
	}
	if (a != 0 && D == 0) {
		double x = 0;
		cout << -b / (2 * a) << endl;
		return 0;
	}
	if (a == 0 && b != 0) {
		double x = 0;
		cout << -c / b << endl;
		return 0;
	}
	return 0;
}