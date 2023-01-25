#include <iostream>
using namespace std;

int main() {
	int A = 0, B = 0;
	cin >> A >> B;
	if (B == 0) {
		cout << "Impossible" << endl;
		return 0;
	}
	cout << A / B << endl;
	return 0;
}