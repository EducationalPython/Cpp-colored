#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int Q = 0;
	cin >> Q;
	int month = 0;
	const vector<int> days_in_moth = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	vector<string> monthly_jobs(days_in_moth[month], "");
	for (int i = 0; i < Q; i++) {
		string operation = "";
		cin >> operation;
		char code = operation[0];
		if (code == 'A') {
			int day = 0;
			cin >> day;
			day--;
			string job = "";
			cin >> job;
			monthly_jobs[day] += job;
			monthly_jobs[day] += ' ';
		}
		else if (code == 'D') {
			int day = 0;
			cin >> day;
			day--;
			int job_count = count(monthly_jobs[day].begin(), monthly_jobs[day].end(), ' ');
			cout << job_count << ' ' << monthly_jobs[day] << endl;
		}
		else {
			int next_month = (month + 1) % 12;
			if (days_in_moth[next_month] < days_in_moth[month]) {
				string extra_job = "";
				for (int j = days_in_moth[next_month]; j < days_in_moth[month]; j++) {
					if (!monthly_jobs[j].empty())
						extra_job += monthly_jobs[j];
				}
				monthly_jobs[days_in_moth[next_month] - 1] += extra_job;
			}
			monthly_jobs.resize(days_in_moth[next_month], "");
			month = next_month;
		}
	}
	return 0;
}