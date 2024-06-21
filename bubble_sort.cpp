#include <bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>&arr) {
	for (int i = 0; i < arr.size() - 1; i++) {
		bool already_swapped = false;
		for (int j = 0; j < arr.size() - 1; j++) {
			//iske jagah hum j<n-i bhi kar sakte hai kyuki har case me
			// last ka ek element sorted hoga
			//isliye hume uska check karne ki jarurat hi nahi hai
			if (arr[j] > arr[j + 1]) {
				swap(arr[j + 1], arr[j]);

			}
			already_swapped = true;
		}
		if (already_swapped == false) {
			break;
		}
	}
}



/*
bool swapped = false
matlab koi bhi swap nahi hua hai
fir hum loop ke andar gye
agar ek bhi swap hua
matlab ki sorted nahi tha sorted nahi tha matlab swapped = true kiye
agar ek bhi round me aisa koi mil jaye jo ek bhi baar swap na ho matlab
it is already sorted
is condition me swapped = false rahega that means humlog break karke baahar aa sakte hai



*/
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

	bubblesort(arr);
	for (auto i : arr) {
		cout << i << " ";
	} cout << endl;
	return 0;
}