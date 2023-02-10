#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N = 1;
	cin >> N;
	vector<int> temp_record(N, 0);
	int sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> temp_record[i];
		sum += temp_record[i];
	}
	int avg_temp = sum / N, K = 0;
	vector<int> hot_days = {};
	for (int i = 0; i < N; i++) {
		if (temp_record[i] > avg_temp) {
			K++;
			hot_days.push_back(i);
		}
	}
	cout << K << endl;
	for (int i : hot_days)
		cout << i << " ";
	return 0;
}