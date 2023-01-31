#include <iostream>
#include <string.h>
using namespace std;

bool IsPalindrom(string word) {
	int length = word.size();
	if (length < 2)
		return true;
	if (word[0] != word[length - 1])
		return false;
	return IsPalindrom(word.substr(1, length - 2));
}

int main() {
	string word = "";
	cin >> word;
	cout << IsPalindrom(word) << endl;
	return 0;
}