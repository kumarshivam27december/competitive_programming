#include <bits/stdc++.h>
using namespace std;
void allsubset(vector<int>&arr) {
	int n = arr.size();
	//
	vector<vector<int>>ans;
	for (int i = 0; i < (i << n); i++) {
		vector<int>v;
		for (int j = 0; j < n; j++) {
			if (i & (1 << j)) {
				v.push_back(nums[i]);
			}
		}
		ans.push_back(v);
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

	// bitmasking
	allsubset(arr);




	return 0;
}


// all subsets