#include <bits/stdc++.h>
using namespace std;
int squareroot(int x) {
	int s = 0;
	int e = x - 1;
	int ans = 0;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		int square = mid * mid;
		if (square == x) {
			return mid;
		} else if (square < x) {
			ans = mid;
			s = mid + 1;
		} else {
			e = mid - 1;
		}
	}
	return ans;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	cout << squareroot(n) << endl;
	return 0;
}