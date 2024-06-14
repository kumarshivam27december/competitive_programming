#include <bits/stdc++.h>
using namespace std;
int peak(vector<int>&arr) {
	int n = arr.size();
	int s = 0;
	int e = n - 1;
	while (s < e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] > arr[mid + 1]) {
			e = mid;
		} else {
			s = mid + 1;
		}
	}
	return s;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int>arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int ans = peak(arr);
	cout << ans << endl;
	return 0;
}