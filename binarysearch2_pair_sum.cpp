/*

sorted array 2 3 3 4 5 6 6 7 9
target 8
no of pair of i j
such that 0<=(i,j)<=9
i,j indices
such that arr[i]+arr[j]<=target

*/



#include <bits/stdc++.h>
using namespace std;

int pairs(vector<int>&arr, int target) {
	int n = arr.size();
	int s = 0;
	int e = n - 1;
	int ans = 0;
	for (int i = 1; i < n; i++) {
		int low = 0;
		int high = i - 1;
		int index = -1;
		while (low <= high) {
			int mid = (low + high) / 2;

			if (arr[mid] + arr[i] <= target) {
				index = mid;
				low = mid + 1;
			} else {
				high = mid - 1;
			}
		}
		ans += index + 1;
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

	int ans = pairs(arr, target);
	cout << ans << endl;

	return 0;
}