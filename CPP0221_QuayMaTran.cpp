#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n][m], b[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) b[i][j] = -1;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) cin >> a[i][j];
		}
		int left = 0, top = 0, right = m - 1, bottom = n - 1;
		while (left < right && top < bottom) {
			for (int j = left + 1; j <= right; j++) {
				b[top][j] = a[top][j - 1];
			}
			
			for (int i = top + 1; i <= bottom; i++) {
				b[i][right] = a[i -1][right];
			}
			
			for (int j = right - 1; j >= left; j--) {
				b[bottom][j] = a[bottom][j + 1];
			}
			
			for (int i = bottom - 1; i >= top; i--) {
				b[i][left] = a[i + 1][left];
			}
			
			top++;
			left++;
			bottom--;
			right--;
		}
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (b[i][j] == -1) cout << a[i][j] << " ";
				else cout << b[i][j] << " ";
			}
		}
		cout << endl;
	}
}

/*

*/

