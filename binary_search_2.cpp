#include <bits/stdc++.h>
using namespace std;
int first_occurence(vector<int>&arr, int target) {
	int n = arr.size();
	int s = 0;
	int e = n - 1;
	int index = -1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == target) {
			index = mid;
			e = mid - 1;
		} else if (arr[mid] > target) {
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return index;
}
int last_occurence(vector<int>&arr, int target) {
	int n = arr.size();
	int s = 0;
	int e = n - 1;
	int index = -1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == target) {
			index = mid;
			s = mid + 1;
		} else if (arr[mid] > target) {
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return index;
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

	int l = first_occurence(arr, target);
	int r = last_occurence(arr, target);

	cout << l << " " << r << endl;

	return 0;
}