#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool IsPalindrom(string word) {
	int length = word.size();
	if (length < 2)
		return true;
	if (word[0] != word[length - 1])
		return false;
	return IsPalindrom(word.substr(1, length - 2));
}

vector<string> PalindromFilter(vector<string> words, int minLength) {
	vector<string> result = {};
	for (auto word : words) {
		if (word.size() >= minLength && IsPalindrom(word))
			result.push_back(word);
	}
	return result;
}

int main() {
	int t = 0;
	cin >> t;
	vector<string> words = {}, filtered_words = {};
	for (int i = 0; i < t; i++) {
		string tmp = "";
		cin >> tmp;
		words.push_back(tmp);
	}
	int minLength = 0;
	cin >> minLength;
	filtered_words = PalindromFilter(words, minLength);
	t = filtered_words.size();
	for (int i = 0; i < t; i++) {
		cout << filtered_words[i] << " ";
	}
	return 0;
}