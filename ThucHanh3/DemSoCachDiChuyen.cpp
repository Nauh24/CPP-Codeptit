#include <bits/stdc++.h>
using namespace std;

int n, k, a[21][21];
int cnt;

void Try(int i, int j, int sum) {
	if (sum > k) {
		return;
	}
//	cout << i << " " << j << " " << sum << endl; 
	if (i == n && j == n) {
		if (sum == k) {
			cnt++;
//			cout<< "Yes";
		}
		return;
	}
	if (i + 1 <= n) Try(i + 1, j, sum + a[i + 1][j]);
	if (j + 1 <= n) Try(i, j + 1, sum + a[i][j + 1]);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> a[i][j];
			}
		}
		cnt = 0;
		Try(1, 1, a[1][1]);
		cout << cnt;
		cout<<endl;
	}
}

/*

*/

