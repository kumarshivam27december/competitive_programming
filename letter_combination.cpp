#include <bits/stdc++.h>
using namespace std;
void generate(string&num, string &output, int index, vector<string>&ans, string mapping[]) {
	//base case
	if (index >= num.length()) {
		ans.push_back(output);
		return;
	}
	int number = num[index] - '0';
	string value = mapping[number];
	for (int i = 0; i < value.length(); i++) {
		output.push_back(value[i]);
		generate(num, output, index + 1, ans, mapping);
		output.pop_back();
	}

}
vector<string> lettercombination(string &num) {
	vector<string> ans;
	if (num.size() == 0) return ans;

	string output;
	int index = 0;
	string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	generate(num, output, index, ans, mapping);
	return ans;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string num;
	cin >> num;
	vector<string>bns = lettercombination(num);

	for (auto i : bns) {
		cout << "[" << i << "]" << " ";
	}
	cout << "\"जहां सोच वहां शौचालय\"" << endl;
	// cout << "\"hello world\"" << endl;
	return 0;
}


