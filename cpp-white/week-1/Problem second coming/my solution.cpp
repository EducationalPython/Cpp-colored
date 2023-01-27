#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "";
	cin >> str;
	int n = str.size();
	int encounter = 0;
	for (int i = 0; i < n; i++) {
		if (str[i] == 'f') {
			encounter++;
		}
		if (encounter == 2) {
			cout << i << endl;
			break;
		}
	}
	if (encounter == 1)
		cout << -1 << endl;
	if (encounter == 0)
		cout << -2 << endl;
	return 0;
}