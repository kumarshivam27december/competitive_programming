#include <bits/stdc++.h>
using namespace std;
class Comp {
public:
	bool operator()(vector<int>&v1, vector<int>&v2) {
		// if (v1[0] + v1[1] > v2[0] + v2[1]) {
		// 	return true;
		// } else if (v1[0] + v1[1] > v2[0] + v2[1]) {

		// 	if (v1[0] < v1[1]) {
		// 		return false;
		// 	} else {
		// 		return true;
		// 	}

		// }
		// return false;
		int sum1 = v1[0] + v2[0];
		int sum2 = v2[0] + v2[1];
		if (sum1 < sum2) return true;
		else if (sum1 > sum2) return false;
		else {
			return v1[0] < v2[0];
		}
	}
};
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<vector<int>>v;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({a, b});
	}

	sort(v.begin(), v.end(), Comp());


	for (auto i : v) {
		cout << i[0] << " " << i[1] << endl;
	}


	return 0;
}