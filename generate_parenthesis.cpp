#include <bits/stdc++.h>
using namespace std;
vector<string>ans;
void generate(string &str, int open, int close) {
	//base case
	if (open == 0 && close == 0) {
		ans.push_back(str);
		return;
	}

	//opening bracket  condition
	if (open > 0) {
		str.push_back('(');
		generate(str, open - 1, close);
		str.pop_back();
	}


	//closing bracket condition

	if (close > 0) {
		if (open < close) {

			str.push_back(')');
			generate(str, open, close - 1);
			str.pop_back();
		}
	}
}
vector<string> generateparanthesis(int n) {
	string str = "";
	generate(str, n, n);
	return ans;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<string> bns = generateparanthesis(n);
	for (auto i : bns) {
		cout << i << endl;
	}
	return 0;
}