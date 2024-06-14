#include <bits/stdc++.h>
using namespace std;
int minEatingtime(vector<int>&arr, int h) {
	//bagal me baith ke game khel rha hai
	int maxi = *max_element(arr.begin(), arr.end());
	int start = 1;
	int ending = maxi;
	int ans = maxi;
	while (start <= ending) {
		int mid = start + (ending - start) / 2;
		long long int sum = 0;
		for (auto i : arr) {
			sum += (i + mid - 1) / mid;

		}
		if (sum <= h) {
			ans = min(ans, mid);
			ending = mid - 1;
		} else {
			start = mid + 1;
		}
	}
	return (int)ans;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	int h;
	cin >> h;
	cout << minEatingtime(arr, h) << endl;

	return 0;
}

