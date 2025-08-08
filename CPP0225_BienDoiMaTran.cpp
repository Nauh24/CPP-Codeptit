#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n][n];
		int sum = 0;
		int maxx = INT_MIN;
		for (int i = 0; i < n; i++) {
			int row = 0;
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
				sum += a[i][j];
				row += a[i][j];
			}
			maxx = max(maxx, row);
		}
		
		for (int i = 0; i < n; i++) {
			int col = 0;
			for (int j = 0; j < n; j++) {
				col += a[j][i];
			}
			maxx = max(maxx, col);
		}
		cout << maxx * n - sum;
		cout<<endl;
	}
}

/*

*/

