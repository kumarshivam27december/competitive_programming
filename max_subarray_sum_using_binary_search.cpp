#include <bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>&prefix, int target, int start) {
	int s = start;
	int e = prefix.size() - 1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (prefix[mid] <= target) {
			s = mid + 1;
		} else {
			e = mid - 1;
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
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int k;
	cin >> k;

	//prefix arr sum
	vector<int>prefix(n);
	prefix[0] = arr[0];
	for (int i = 1; i < n; i++) {
		prefix[i] = prefix[i - 1] + arr[i];
	}
	int minlength = INT_MAX;

	for (int i = 0; i < n; i++) {
		int target = k + arr[i];
		int index = binarysearch(prefix, target, i);
		if (index != prefix.size()) {
			minlength = min(minlength, index - i);
		}
	}


	cout << minlength << endl;




	return 0;
}

/*
find the minimum length of the subarray with sum<=k
do it in nlogn complexity


*/