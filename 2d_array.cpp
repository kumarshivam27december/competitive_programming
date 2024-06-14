#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	//precomputation
	int row;
	int col;
	cin >> row >> col;
	int arr[row][col];

	// int queries;
	// cin >> queries;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> arr[i][j];
		}
	}

	int prefix[row][col];
	prefix[0][0] = arr[0][0];
	for (int i = 1; i < row; i++) {
		prefix[i][0] = prefix[i - 1][0] + arr[i][0];
	}

	for (int j = 1; j < col; j++) {
		prefix[0][j] = prefix[0][j - 1] + arr[0][j];
	}

	for (int i = 1; i < row; i++) {
		for (int j = 1; j < col; j++) {
			prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + arr[i][j];
		}
	}

	// int x1, x2, y1, y2;
	// cin >> x1 >> x2 >> y1 >> y2;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr[i][j] << " ";
		} cout << endl;
	}
	cout << endl;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << prefix[i][j] << " ";
		} cout << endl;
	}
	return 0;


	//4 co-ordinates

	int n, m;
	cin >> n >> m;
	std::vector<int> arr(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0;)

		}
	vector<vector<int>>pre(n, vector<int>(m));
	pre[0][0] = arr[0][0];
	for (int i = 1; i < n; i++) {
		pre[i][0] = pre[i - 1][0] + arr[i][0];
	}


	for (int )


		int x1, x2, y1, y2;
	cin >> x1 >> x2 >> y1 >> y2;


	int ans = pre[x2][y2];

	if (x1 - 1 >= 0) {
		ans -= pre[x1 - 1][y2];
	}
	if (y1 - 1 >= 0) {
		ans -= pre[x1][y2 - 1];
	}

	if (x1 - 1 >= 0 and y1 - 1 >= 0) {
		ans += pre[x1 - 1][y1 - 1];
	}






}