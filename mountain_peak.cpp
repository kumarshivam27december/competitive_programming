#include <bits/stdc++.h>
using namespace std;
int findpeak(vector<int>&arr) {
	int s = 0;
	int e = arr.size() - 1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
			return mid;//3 4 6 7 9 5 2 1 0
		} else if (arr[mid] < arr[mid + 1]) {
			s = mid + 1;
		} else {
			e = mid;
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
	int ans = findpeak(arr);
	cout << ans << endl;
	return 0;
}