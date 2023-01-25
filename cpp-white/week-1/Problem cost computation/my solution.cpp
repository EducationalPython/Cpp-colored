#include <iostream>
using namespace std;
double new_cost(double original_cost, double cut_off) {
	return original_cost - cut_off * original_cost / 100;
}

int main() {
	double N = 1, A = 0, B = 0, X = 0, Y = 0;
	cin >> N >> A >> B >> X >> Y;
	if (N > B) {
		cout << new_cost(N, Y) << endl;
		return 0;
	}
	if (N > A) {
		cout << new_cost(N, X) << endl;
		return 0;
	}
	cout << N << endl;
	return 0;
}