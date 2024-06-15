#include <bits/stdc++.h>
using namespace std;
int pivot(vector<int>&nums) {
	int n = nums.size();
	int s = 0;
	int e = n - 1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]) {
			return mid;
		} else if (nums[mid] > nums[n - 1]) {
			s = mid + 1;
		} else {
			e = mid ;
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
	vector<int>nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	int piv = pivot(nums);
	cout << piv << endl;

	return 0;
}