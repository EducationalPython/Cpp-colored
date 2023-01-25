#include <iostream>
using namespace std;

int main() {
	int A = 1, B = 1;
	cin >> A >> B;
	int m = A;
	if (A % 2 == 1)
		m = A + 1;
	while (m <= B) {
		cout << m << " ";
		m += 2;
	}
	return 0;
}