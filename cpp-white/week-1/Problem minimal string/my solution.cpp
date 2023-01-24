#include <iostream>
#include <string>
using namespace std;

int main() {
	int N = 3;
	string min = "";
	cin >> min;
	for (int i = 0; i < N - 1; i++) {
		string tmp = "";
		cin >> tmp;
		if (tmp < min)
			min = tmp;
	}
	cout << min << endl;
	return 0;
}