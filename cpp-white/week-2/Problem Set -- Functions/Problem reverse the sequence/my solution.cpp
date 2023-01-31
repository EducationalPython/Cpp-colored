#include <iostream>
#include <vector>
using namespace std;

void Reverse(vector<int>& v) {
	int n = v.size();
	for (int i = 0; i < n / 2; i++) {
		int tmp = v[i];
		v[i] = v[n - 1 - i];
		v[n - 1 - i] = tmp;
	}
	return;
}

//int main() {
//	int t = 0;
//	cin >> t;
//	vector<int> nums(t, 0);
//	for (int i = 0; i < t; i++) {
//		cin >> nums[i];
//	}
//	Reverse(nums);
//	for (int i = 0; i < t; i++) {
//		cout << nums[i] << " ";
//	}
//	return 0;
//}