#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	bool flag = true;
	for (int i = 2; i * i < n; i++) {
		if (n % i == 0) {
			flag = false;
		}
	}
	if (flag) {
		cout << true << endl;
	} else {
		cout << false;
	}
	return 0;
}