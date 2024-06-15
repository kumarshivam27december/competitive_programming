#include <bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>>&arr, int target) {
	int row = arr.size();
	int col = arr[0].size();
	int s = 0;
	int e = row * col - 1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		int ele = arr[mid / col][mid % col];
		if (target == ele) {
			return true;
		} else if (target < ele) {
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return false;

}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int row;
	int col;
	cin >> row;
	cin >> col;
	vector<vector<int>> arr(row, vector<int>(col));
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> arr[i][j];
		}
	}

	int target;
	cin >> target;

	if (search(arr, target)) {
		cout << "found";
	} else {
		cout << "not found";
	}
	return 0;
}