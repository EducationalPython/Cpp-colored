#include <iostream>
#include <vector>
using namespace std;

vector<int> Reversed(const vector<int>& v) {
	int n = v.size();
	vector<int> reversed(n, 0);
	for (int i = 0; i < n; i++) {
		reversed[i] = v[n - 1 - i];
	}
	return reversed;
}

//int main() {
//	vector<int> nums = { 1,2,3,4,5 }, bums = Reversed(nums);
//	for (auto bum : bums) {
//		cout << bum << " ";
//	}
//	return 0;
//}