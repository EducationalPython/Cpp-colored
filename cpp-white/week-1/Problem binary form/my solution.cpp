#include <iostream>
#include <stack>
using namespace std;

int main() {
	int N = 1;
	stack <int> binary = {};
	cin >> N;
	while (N != 0) {
		int tmp = N % 2;
		binary.push(tmp);
		N = N / 2;
	}
	while (!binary.empty()) {
		cout << binary.top();
		binary.pop();
	}
	return 0;
}