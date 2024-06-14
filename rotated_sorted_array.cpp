#include <bits/stdc++.h>
using namespace std;
int inpeak(vector<int>&arr, int target) {
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
	// return s;
	int peak = s;
	int l = 0;
	int r = peak;
	int ans = -1;
	while (l <= r) {
		int mid =  l + (r - l) / 2;
		if (arr[mid] == target) {
			ans = mid;
		} else if (arr[mid] > target) {
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}


	int start = peak;
	int end = n - 1;
	while (start <= end) {
		int mid = start + (end - start) / 2;
		if (arr[mid] == target) {
			ans = mid;
		} else if (arr[mid] > target) {
			start = mid + 1;
		} else {
			end = mid - 1;
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
	int target ;
	cin >> target;

	int ans = inpeak(arr, target);
	cout << ans << endl;
	return 0;
}