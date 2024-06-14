#include <bits/stdc++.h>
using namespace std;
int peaking(vector<int>&arr) {
	int s = 0;
	int n = arr.size();
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
int binary_search(vector<int>&arr, int start, int end, int target, bool  increasing) {
	int s = start;
	int e = end;
	int index = -1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == target) {
			index = mid;
			break;
		}
		else if (arr[mid] > target) {
			if (increasing) {
				e = mid - 1;
			} else {
				s = mid + 1;
			}
		} else {
			if (increasing) {
				s = mid + 1;
			} else {
				e = mid - 1;
			}
		}
	}
	return index;
}
int element_in_mountain_array(vector<int>&arr, int target) {
	//first we will search the peak
	int peak = peaking(arr);
	// then we will seach in the left part
	int left_side = binary_search(arr, 0, peak, target, true);
	if (left_side != -1) return left_side;

	//if not found then in the right part
	int right_side = binary_search(arr, peak + 1, target, arr.size() - 1, false);
	return right_side;
}
void element_in_a_flat_mountain_arr(vector<int>&arr) {
	int n = arr.size() - 1;
	if (n < 4) {
		cout << "not possible" << endl;
		return;
	}
	int s = 0;
	int e = n - 1;
	int target1 = -1;
	int target2 = -1;
	while (s < e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == arr[mid - 1]) {
			target1 = mid ;
			e = mid - 1;
		} else if (arr[mid] == arr[mid + 1]) {
			target2 = mid ;
			s = mid + 1;
		}
		else if (arr[mid] > arr[mid + 1]) {
			e = mid;
		} else {
			s = mid + 1;
		}
	}
	if (target1 == -1) {
		target1 = s;
	}
	if (target2 == -1) {
		target2 = e;
	}

	cout << target1 << " " << target2 << endl;
}
int find_pivot(vector<int> &arr) {
	// int start = 0;
	// int end = arr.size() - 1;
	// while (start < end) {
	// 	int mid = start + (end - start) / 2;
	// 	if (arr[mid] > arr[mid + 1]) {
	// 		return mid;
	// 	} else if (arr[mid] < arr[mid - 1]) {
	// 		return mid;
	// 	} else if (arr[start] > arr[mid]) {
	// 		start = mid + 1;
	// 	} else {
	// 		end = mid - 1;
	// 	}
	// }
	// return 0;
	int start = 0;
	int end = arr.size() - 1;
	while (start < end) {
		int mid = start + (end - start) / 2;
		// if (arr[mid] > arr[arr.size() - 1]) {
		// 	start = mid + 1;
		// } else {
		// 	end = mid;
		// }
		// if (arr[mid] > arr[])
		// }
		return start;
	}
	int element_in_a_parallel_line(vector<int>&arr, int target) {
		int piv = find_pivot(arr);
		int left_search = binary_search(arr, 0, piv, target, true);
		if (left_search != -1) return left_search;
		int right_search = binary_search(arr, piv + 1, arr.size() - 1, target, true);
		return right_search;
	}
	int main() {
#ifndef ONLINE_JUDGE
		freopen("input1.txt", "r", stdin);
		freopen("output1.txt", "w", stdout);
#endif
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int target;
		cin >> target;
		// cout << peaking(arr) << endl;
		// cout << element_in_mountain_array(arr, target) << endl;
		element_in_a_flat_mountain_arr(arr);
		cout << element_in_a_parallel_line(arr, target) << endl;;
		return 0;
	}