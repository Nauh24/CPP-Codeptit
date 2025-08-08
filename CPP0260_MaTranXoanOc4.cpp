#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a;
	for (int i = 0; i < n * n; i++) {
		int x;
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());
	int j = 0;
	int left = 0, top = 0, right = n - 1, bottom = n - 1;
	int b[n][n];
	while (left <= right && top <= bottom) {
		for (int i = left; i <= right; i++) {
			b[top][i] = a[j++];
		}
		top++;
		for (int i = top; i <= bottom; i++) {
			b[i][right] = a[j++];
		}
		right--;
		if (top <= bottom) {
			for (int i = right; i >= left; i--) {
				b[bottom][i] = a[j++];
			}
			bottom--;
		}
		if (left <= right) {
			for (int i = bottom; i >= top; i--) {
				b[i][left] = a[j++];
			}
			left++;
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}

/*

*/

