#include <bits/stdc++.h>
using namespace std;
void generate(vector<int>&nums, vector<int>&subset, int index, vector<vector<int>>&ans) {
	if (index == nums.size()) {
		ans.push_back(subset);
		return;
	}

	//ya to leave  karo i.e. pick mat karo
	generate(nums, subset, index + 1, ans);

	//ya to pick karlo

	subset.push_back(nums[index]);
	generate(nums, subset, index + 1, ans);
	subset.pop_back();


}
vector<vector<int>> allsubsets(vector<int>&nums, int index) {
	vector<vector<int>>ans;
	vector<int>subset;

	generate(nums, subset, 0, ans);
	return ans;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	vector<vector<int>> bns = allsubsets(nums, 0);

	// Printing the subsets
	for (int i = 0; i < bns.size(); i++) {
		for (int j = 0; j < bns[i].size(); j++) {
			cout << bns[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

