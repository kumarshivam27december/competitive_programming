#include <bits/stdc++.h>
using namespace std;
int findFloor(vector<int>&arr, int n, int x) {
	int s = 0;
	int e = n - 1;
	int ans = -1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] <= x) {
			ans = arr[mid];
			s = mid + 1;
		} else {
			e = mid - 1;
		}
	}
	return ans;
}
int findCeil(vector<int>&arr, int n, int target) {
	int s = 0;
	int e = n - 1; int ans = -1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] >= target) {
			ans = arr[mid];
			e = mid - 1;
		} else {
			s = mid + 1;
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
	vector<int>arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int target;
	cin >> target;

	cout << findFloor(arr, n, target) << " " << findCeil(arr, n, target) << endl;
	return 0;
}