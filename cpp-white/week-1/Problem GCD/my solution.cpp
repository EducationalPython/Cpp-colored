#include <iostream>
using namespace std;

int GCD(int m, int n) {
	if (m == 0)
		return n;
	if (n == 0)
		return m;
	if (m == n)
		return m;
	return m > n ? GCD(m % n, n) : GCD(m, n % m);
}

int main() {
	int A = 1, B = 1;
	cin >> A >> B;
	cout << GCD(A, B) << endl;
	return 0;
}