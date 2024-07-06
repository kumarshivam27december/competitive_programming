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
	for (int i = 1; i <= sqrt(n); i++) {

		if (n % i == 0) {
			ans.push_back(i);
			if (i != (n / i)) {
				ans.push_back(n / i);
			}

		}


	}




	// for (int i = ans.size() - 1; i >= 0; i--) {
	// 	ans.push_back(n / i);
	// }




	for (auto i : ans) {
		cout << i << " ";
	}
	return 0;
}