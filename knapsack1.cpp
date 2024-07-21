#include <bits/stdc++.h>
using namespace std;
int func(int i, sum) {
	if (i == n) returnm 0;
	int ans = func(i + 1, sum);
	if (sum + w[i] <= amount) {
		ans = max(ans, func(i + 1, sum + w[i] + val[i]));
		return ans;
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	int amount;
	cin >> amount;
	while (t--) {
		int number, int value;
		cin >> number, value;
	}

	cout << func(i, sum);



	for (int i = 0; i < amount; i++) {
		dp[n][i] = 0;

	}

	for (int i = n - 1; i >= 0; i--) {
		for (int j = amount; j >= 0; j--) {
			dp[i][j] = dp[i + 1][j]; //skip
			if (j + w[i] <= amount) {
				dp[i][j] = max(dp[i][j], dp[i + 1][j] + w[i] + val[i]); //choose
			}
		}
	}


	return 0;
}