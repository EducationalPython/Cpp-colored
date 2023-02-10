#include <iostream>
#include <string>
#include <vector>
using namespace std;

int sum_last_k(const vector<bool>& q, int k) {
	int n = q.size();
	int sum = 0;
	for (int i = n - 1; i >= n + k; i--) {
		sum += q[i];
	}
	return sum;
}

int main() {
	int Q = 0;
	cin >> Q;
	string operation = "";
	getline(cin, operation);
	vector<bool> queue = {};
	int size = 0, count = 0;
	for (int i = 0; i < Q; i++) {
		getline(cin, operation);
		char first = operation[0];
		if (first == 'C') {
			int k = stoi(operation.substr(5));
			if (k < 0) {
				count -= sum_last_k(queue, k);
			}
			size = queue.size();
			queue.resize(size + k);
		}
		else if (first == 'Q') {
			int j = stoi(operation.substr(6));
			if (queue[j] == true) {
				count--;
			}
			queue[j] = false;
		}
		else if (first == 'W') {
			if (operation == "WORRY_COUNT") {
				cout << count << endl;
			}
			else {
				int j = stoi(operation.substr(6));
				if (queue[j] == false) {
					count++;
				}
				queue[j] = true;
			}
		}
	}
	return 0;
}