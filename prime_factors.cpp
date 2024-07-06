#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	vector<int>ans;

	for (int i = 2;  i <= sqrt(n); i++) {
		if (n % i == 0) {
			ans.push_back(i);
		}
		while (n % i == 0) {
			n = n / i;
		}
	}

	if (n > 1) {
		ans.push_back(n);
	}


	for (auto i : ans) {
		cout << i << " ";
	}
	return 0;
}