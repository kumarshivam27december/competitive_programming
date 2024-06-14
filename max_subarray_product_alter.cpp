#include <bits/stdc++.h>
using namespace std;
double maximum(double a, double b) {
	return a > b ? a : b;
}
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


	//2 3 0 -1 3 2 0 1
	/*dry run
	2  1  2
	6  1  6
	1  2  6
	-1 6  6
	-3 -6 6
	-6 1 6
	1 3  6
	1 6  6

	*/






	double prefix_prod = 1;
	double suffix_prod = 1;
	double ans = arr[0];
	for (int i = 0; i < n; i++) {
		prefix_prod = prefix_prod == 0 ? 1 : prefix_prod;
		suffix_prod = suffix_prod == 0 ? 1 : suffix_prod;
		prefix_prod *= arr[i];
		suffix_prod *= arr[i];
		ans = maximum(ans, maximum(prefix_prod, suffix_prod));
	}
	cout << ans << endl;

	return 0;
}