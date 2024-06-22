#include <bits/stdc++.h>
using namespace std;
class node {
	int data;
	node* next;
	node(int data, node* next) {
		this->data = data;
		this->next = next;
	}
};
void insert() {

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


	return 0;
}