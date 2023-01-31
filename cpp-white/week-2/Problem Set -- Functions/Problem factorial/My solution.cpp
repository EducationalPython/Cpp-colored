#include <iostream>
using namespace std;

int Factorial(int n) {
	int result = 1;
	for (int i = 1; i <= n; i++)
		result *= i;
	return result;
}

int main() {
	int n = 1;
	cin >> n;
	cout << Factorial(n) << endl;
	return 0;
}