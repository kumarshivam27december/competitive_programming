#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int target;
	cin >> target;
	int start = 0;
	int end = n - 1;
	while (start <= end) {
		int mid = start + (end - start) / 2;
		if (arr[mid] == target) {
			cout << mid << endl;
			return 0;
		} else if (arr[mid] > target) {
			end = mid - 1;
		} else {
			start = mid + 1;
		}
	}
	cout << -1 << endl;
	return 0;
}